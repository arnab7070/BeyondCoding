import random
from sre_parse import SPECIAL_CHARS
length = input("Enter the length of your desired password: ")
alphabets = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','u','v','w','x','y'
,'z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W',
'X','Y','Z'
]
numbers = [1,2,3,4,5,6,7,8,9,0]
special_character = ['&','%','$','#','@','(',')','_','-',':',';','.','/','!','~','^','<','>','?',
'*'
]
password = ""
