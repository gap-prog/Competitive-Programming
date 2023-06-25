"""
snippet.py
----------

Converts contents of a file to JSON format for VSCode snippets

!Warning: Double quotes from input are not escaped
"""


import os
from typing import Any


class Error:
    def __init__(self, state):
        self.state = state

    @staticmethod
    def _check(state: dict) -> bool:
        if state['error'] == False:
            return False
        return True

    def printError(self):
        if Error._check(self.state):
            for k, v in self.state.items():
                if k != 'error':
                    print(v)


class Data:
    def __init__(self) -> None:
        self.data = []

    def __getattribute__(self, __name: str) -> Any: 
        return self.__dict__[__name]
    
    def __setattr__(self, __name: str, __value: Any) -> None:
        self.__dict__[__name] = __value


class FILE:
    def __init__(self, fin: str, fout: str, verify=True) -> None:
        self.fin = fin
        self.fout = fout
        self.state = {
            'verified': False,
            'read': False,
            'wrote': False,
        }
        if (verify):
            self._verify()

    def _verify(self) -> dict:
        status = {
            'error': False,
            'fin': True,
        }
        if os.path.isfile(self.fin) == False:
            status['error'] = True
            status['fin'] = f'{self.fin} not found.'
            error = Error(status)
            error.printError()
        else:
            self.state['verified'] = True
    
    def read(self) -> list:
        if self.state['verified']:
            data = []
            with open(self.fin, 'r') as file:
                data = file.readlines()
                file.close()
            self.state['read'] = True
            return data
    
    def write(self, data: list) -> None:
        if self.state['read']:
            with open(self.fout, 'w+') as file:
                for i in data:
                    file.write(f'"{i}",\n')
                self.state['wrote'] = True
                file.close()


def clean(data: list) -> Data:
    for i in range(len(data)):
        if len(data[i]) > 1 or data[i] == '\n':
            data[i] = data[i][:-1]
    return data


if __name__ == '__main__':
    file = FILE('template.cpp', 'file.txt')
    if file.state['verified']:
        Data.data = clean(file.read())
        file.write(Data.data)
