call plug#begin()
Plug 'itchyny/lightline.vim'
Plug 'preservim/nerdtree'
Plug 'markvincze/panda-vim'
call plug#end()
nnoremap <C-t> :NERDTreeToggle<CR>
color panda
let g:lightline = {
      \ 'colorscheme': 'one',
      \ }
set laststatus=2
set number
set noshowmode
set shiftwidth=4
set autoindent
set mouse=a
set backspace=indent,eol,start
