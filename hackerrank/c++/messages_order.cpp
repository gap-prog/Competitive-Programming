// HackerRank Problem Link: https://www.hackerrank.com/challenges/messages-order/problem

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Message {
	private:
		string text;
		int indx_;
	public:
		inline static int idx;
		Message() {}
		Message(string txt) : text(txt) {}
		const string& get_text() {
			return this->text;
		}
		const int& index() {
			return this->indx_;
		}
		void set_index(int indx) {
			this->indx_ = indx;
		}
		bool operator < (Message& m) {
			return this->indx_ < m.index();
		}
};

class MessageFactory {
	public:
		MessageFactory() {}
		Message create_message(string& text) {
			Message msg(text);
			msg.set_index(Message::idx++);
			return msg;
		}
};

class Recipient {
	private:
		void fix_order() {
			 sort(messages_.begin(), messages_.end());
		 }
		 vector<Message> messages_;
	public:
		 Recipient() {}
		 void receive(const Message& msg) {
			 messages_.push_back(msg);
		 }
		 void print_messages() {
			 fix_order();
			 for (auto& msg : messages_) {
				 cout << msg.get_text() << endl;
			 }
			 messages_.clear();
		 }
};

class Network {
	public:
		static void send_messages(vector<Message> messages, Recipients& recipient) {
			random_shuffle(messages.begin(), messages.end());
			for(auto msg : messages) {
				recipient.recieve(msg);
			}
		}
};

int main() {
	MessageFactory message_factory;
	Recipient recipient;
	vector<Message> messages;
	string text;
	while(getline(cin, text)) {
		messages.push_back(message_factory.create_message(text));
	}
	Network::send_messages(messages, recipient);
  recipient.print_messages();
}
