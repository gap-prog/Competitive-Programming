set nocompatible
filetype off
set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()
Plugin 'gmarik/Vundle.vim'
call vundle#end()
filetype plugin indent on
let python_highlight_all=1
colorscheme default
set background=light
syntax on
set nu
set encoding=utf-8
set guifont=FixedsysExcelsiorIIIb:h24
set guicursor=n-v-ve-o-r-c-ci-cr:block
set smartindent
Plugin 'vim-scripts/indentpython.vim'
au BufNewFile,BufRead *.py
    \ set tabstop=4
    \ set softtabstop=4
    \ set shiftwidth=4
    \ set textwidth=79
    \ set expandtab
    \ set autoindent
    \ set fileformat=unix
autocmd BufRead,BufNewFile *.js,*.html,*.css,*.cpp,*.java setlocal tabstop=2 shiftwidth=2 softtabstop=2
au BufRead,BufNewFile *.py,*.pyw,*.c,*.h match BadWhitespace /\s\+$/
inoremap { {}<Left>
inoremap {<CR> {<CR>}<Esc>O
inoremap {{ {
inoremap {} {}
inoremap { {<ESC>ho}<ESC>O
inoremap ( ()<Esc>ha
inoremap [ []<Esc>ha
inoremap " ""<Esc>ha
inoremap ' ''<Esc>ha
inoremap ` ``<Esc>ha
