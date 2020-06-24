num_books = int(input())
book_list = []
for i in range(num_books):
  book_list.append(int(input()))

book_list.sort(reverse=True)

#for j in range(num_books):
 # print(book_list[j])  

total=0

for i in range(num_books): 
  if i%3!=2:
    total+=book_list[i]

print(total)
