ls
-> level09 token

./level09
-> require 1 arg

./level09 token
-> tpmhr

./level09 hhhhhh
-> hijklm

suspicious
-> shift of one ?

export a=$(cat token)
./level09 $a
-> f5mpq;v�E��{�{��TS�W�����

cat token
-> f4kmm6p|=�p�n��DB�Du{��

4+1 = 5
k = 104
j = 106

it loops on each character and add "v + x" on each, x+=1 on each iteration
we reverse:
-> loop over result of ./level09 doing "v - x" on each iteration
python main.py:
-> f3iji1ju5yuevaus41q1afiuq

su flag09
f3iji1ju5yuevaus41q1afiuq
get flag
-> s5cAJpM8ev6XHw998pRWG728z
done