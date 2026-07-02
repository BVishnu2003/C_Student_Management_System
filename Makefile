student : main.o stud_add.o stud_show.o stud_del.o stud_mod.o stud_save.o stud_sort.o stud_exit.o
	gcc main.o stud_add.o stud_show.o  stud_del.o stud_mod.o stud_save.o stud_sort.o stud_exit.c -o student

main.o : main.c student.h
	gcc -c main.c

stud_add.o: stud_add.c student.h
	gcc -c stud_add.c

stud_show.o: stud_show.c student.h
	gcc -c stud_show.c	

stud_del.o: stud_del.c student.h
	gcc -c stud_del.c	

stud_mod.o: stud_mod.c student.h
	gcc -c stud_mod.c	

stud_save.o: stud_save.c student.h
	gcc -c stud_save.c		

stud_sort.o: stud_sort.c student.h
	gcc -c stud_sort.c	

stud_exit.o: stud_exit.c student.h
	gcc -c stud_exit.c

clean:
	rm -f *.o student	


