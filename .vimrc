" === VIM OPTIMISÉ 42 - FRIENDLY VERSION ===

" --- COLORATION SYNTAXIQUE ---
syntax on
set termguicolors
colorscheme torte             " Arrière-plan sombre + couleurs sympas

" --- NUMÉROS DE LIGNES ---
set number

" --- INDENTATION (NORME 42) ---
set autoindent
" set smartindent            " Désactivé pour éviter les indentations automatiques bizarres
set tabstop=4
set shiftwidth=4
set softtabstop=4
set noexpandtab              " IMPORTANT : utiliser de vraies tabulations

" --- VISUALISATION TAB/SPACE ---
set list
set listchars=tab:▸\ ,trail:·,extends:>,precedes:<

" --- RECHERCHES ---
set hlsearch                 " Met en surbrillance les résultats
set incsearch                " Recherche incrémentale

" --- PARENTHESES ---
set showmatch

" --- BARRE D’ÉTAT ---
set laststatus=2
set ruler                    " Affiche la position du curseur

" --- SONS ---
set noerrorbells
set novisualbell
set t_vb=

" --- SOURIS ---
set mouse=a

" --- AIDE VISUELLE POUR STYLE 42 ---
" Met en surbrillance les lignes trop longues (>80 caractères)
highlight OverLength ctermbg=darkred ctermfg=white guibg=#592929
match OverLength /\%81v.\+/

" Met en évidence les TODO/FIXME
highlight Todo ctermfg=Yellow cterm=bold guifg=#FFD700 gui=bold
syntax match Todo /TODO\|FIXME/

" --- DÉSACTIVER F1 ---
if has("gui_running") || &term =~ "xterm"
  noremap <F1> <Nop>
endif

" --- HEADER 42 ---
source ~/stdheader.vim

" --- INFOS PERSO 42 ---
let g:user42 = "jcalais"
let g:mail42 = "joan.calais@learner.42.tech"
