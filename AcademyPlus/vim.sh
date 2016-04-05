mkdir -p ~/.vim/autoload ~/.vim/bundle && \
	curl -LSso ~/.vim/autoload/pathogen.vim https://tpo.pe/pathogen.vim
echo "execute pathogen#infect()
filetype plugin indent on
syntax enable
set background=dark
colorscheme solarized
set nu
set smartindent
set autoindent
set t_Co=256
set tabstop=4
set mouse=a" > ~/.vimrc
cd ~/.vim/bundle
git clone git://github.com/altercation/vim-colors-solarized.git
