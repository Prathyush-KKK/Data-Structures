## Theory
here we can insert as well as delete from both pointers front and rear.

for example you start inserting using rear: 
it moves as usual
if u want to delete using rear, reverse the rear pointer and delete value
you can also delete using front and and insert using the same

So we observe that insertion and deletion is allowed from both the ends.

There are two types:
i) input restricted DEQueue:
   same properties but front is restricted from inserting
ii) output restricted DEQueue:
    same properties but rear is restricted from deletion.

Number of Operations:
i) Insert from front
ii) delete from front
iii) Insert from rear 
iv) delete from rear
