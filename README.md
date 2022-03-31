# TwoProgramsaday_assignment
<br> 1.	Write a program to find the area of a triangle using following function signatures.
		<br> void input(float *base, float *height);
		<br> void find_area(float base , float height, float *area);
		<br> void output(float base, float height, float area);
		<br> input:
		<br> 1
		<br> 2
		<br> output:
		<br> the area of the traingle with base 1.000000 and height 2.000000 is 1.000000

<br> 2.	Write a program to find if a triangle is scalene. A triangle is a scalene traingle if all the
three sides of the triangle are not equal to each other.

	<br> int input_side()
	<br> int check_scalene(int a, int b, int c)
	<br> void output(int a, int b, int c, int isscalene)


<br> 3.	Write a program find whether a number is a composite number. A Composite number has a factor other than
1 and itself
	<br> int input_number();
	<br> int is_composite(int n);
	<br> void output(int n, int composite);
	<br> input: 
	<br> 8
	<br> output:
	<br> 8 is a composite number.

<br> 4.	Write a program to find Sum of composite number in an array of numbers different containing numbers entered by the user.
	<br> int input_array_size();
	<br> void input_array(int n, int a[n]);
	<br> int sum_composite_numbers(int n, int a[n]);
	<br> void out_put(int sum);
	<br> input:
	<br> 1 2 7 8 12
	<br> output:
	<br> 20

<br> 5. Write a program to find gcd (hcf) of two numbers.
	<br> int input();
	<br> int gcd(int a, int b);
	<br> void output(int a, int b, int gcd);
	<br>input:
	<br>12 16
	<br>output
	<br>4
	
<br> 6.	Write a program to reverse a string.
	<br> void input_string(char *a);
	<br> char *str_reverse(char *a);
	<br> void output(char *a,char *reversea);
	<br> input:
	<br> hello 
	<br> output:
	<br> olleh
	
<br> 7. Write a program to find the area of a triangle
	<br> struct _triangle
	<br> {
	<br> 	float base,altitude,area;
	<br> };
	<brtypedef _triangle Triangle
	<br> Triangle input_triangle(); 
	<br> void find_area(Traingle *t);
	<br> void output(Triangle t);
	<br> input:
	<br> 2 3
	<br> output:
	<br> The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000

<br> 8. Write a program to find the triangle with smallest area in n given triangles.
	<br> struct _triangle
	<br> {
	<br> 	float base,altitude,area;
	<br> };
	<br> typedef _triangle Triangle
	<br> int input_n();
	<br> Triangle input_triangle(); 
	<br> void input_n_triangles(int n, triangle t[n]);
	<br> void find_area(Triangle *t);
	<br> void find_areas_n(int n, Triangle t[n]);
	<br> Triangle find_smallest_triangle(int n, Triangle t[n]);  
	<br> void output(int n, Triangle t[n], Triangle smallest);
	<br> void 
	<br> input:
	<br> 2 3
	<br> 4 6
	<br> the smallest of triangles with base and height
	<br> 2,3 and
        <br> 4,6
	<br> is
        <br> triangle with base 2.000000, 3.000000 is 3.000000
	<br> The area of triangle wwith base = 2.000000 and altitude = 3.000000 is 3.000000
	
<br> 9.	Write a program to find the distance between two points
		<br> void input(float \*x1, float \*y1, float \*x2, float \*y2);
		<br> void find_distance(float x1, float y1, float x2, float y2, float *area);
		<br> void output(float x1, float y1,float x2, float y2, float area);
		<br> input:
		<br> 1 1 2 2
		<br> output:
		<br> the distance between point (1.000000,1.000000) and (2.000000,2.000000) is  with 1.4142

<br> 10.	Write a program to find whether the three points form a triangle.
	<br> void input_triangle(float \*x1, float \*y1, float \*x2, float \*y2, float \*x3, float \*y3);
	<br> int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
	<br> void output(float x1, float y1, float x2, float y2,float x3, float y3, int istriangle)


<br> 11.	Write a program find whether a given number is a prime number. 
	<br> int input_number();
	<br> int is_prime(int n);
	<br> void output(int n, int is_prime);
	<br> input: 
	<br> 3
	<br> output:
	<br> 3 is a prime number.

<br> 12.	Write a program to find nth number in fibonacci sequence.
        <br> Fibonacci sequence consists of 0,1,1,2,3,5,8,13,21........
	<br> int input();
	<br> int find_fibo(int n);
	<br> void output(int n, int fibo);

<br> 13. Write a program to find all the prime numbers between erotosthenes sieve method.
	<br> int input_array_size();
	<br> void init_array(int n, int a[n];
	<br> void erotosthenes_sieve(int n, int a[n]);
	<br> void out_put(int n, int a[n]);
	<br> input:
	<br> 100
	<br> output:
	<br> 2,3,7,11,13,19,23,29,31,...

	
<br> 14.	Write a program to find the index of a substring of a string.
	<br> void input_string(char *a);
	<br> int str_reverse(char \*string, char \*substring);
	<br> void output(char \*string, char \*substring, int index);
	<br> input:
	<br> helloworldhello
	<br> world
	<br> output:
	<br> The index of world in helloworldhello is 5
	
<br> 15. Write a program to find the length of a line.
        <br> struct _point {
	<br>	float x,y;
	<br> };
        <br> typedef struct _point Point;
	<br> struct _line
	<br> {
	<br>	Point p1,p2;
	<br>	float distance;
	<br> };
	<br> typedef struct _line Line
	<br> Point input_point();	
	<br> Line input_line(); 
	<br> void find_length(Line \*l);
	<br> void output(Line l);
	
<br> 16. Write a program to find the perimeter of a polygon
	<br> struct _point {
	<br>	float x,y;
	<br> };
        <br> typedef struct _point Point;
	<br> struct _line
	<br> {
	<br>	Point p1,p2;
	<br>	float distance;
	<br> };
	<br> struct _line Line;
	<br> struct _polygon {
        <br>   int n;
	<br>   Line l[100];
	<br>   float perimenter;
	<br> }
	<br> int input_n();
	<br> int input_polygon( int n, Polygon \*p);
	<br> Line input_line();
	<br> void input_n_lines(int n, Line l[n]);
	<br> void find_perimeter(Polygon \*p);
	<br> void output(Polygon p);
	
<br> 17.	Write a program to Compare two strings  
	<br> void input_two_string(char *a, char *b);
	<br> int strcmp(char *a, char *b);
	<br> void output(char *a, char *b, int result);
	<br> input:
	<br> hello 
	<br> world
	<br> output:
	<br> world is greater than hello
	
<br> 18. Write a program to find Sum of n complex numb<br> ers    
	<br> struct _co<br> mplex
	<br> {
		<br> float real,imaginary;
	<br> };
	<br> typedef _complex Complex;
	<br> int get_n();
	<br> Complex input_complex();
	<br> void input_n_complex(int n, Complex c[n]);
	<br> Complex add(Complex a, Complex b);
	<br> Complex add_n_complex(int n, Complex c[n]);
	<br> void output(int n, Complex c[n], Complex result);
<br> 	input:
	2
	<br> 2 + 3i 
	<br> 4 + 5i
	<br> 2 + 3i 
	<br> + 4 + 5i is 
	<br> 6 + 8i
<br>
<br>	
	<br> 19. Write program to add n fractions
	<br> struct _fraction 
	<br> {
	<br>    int num,den;
	<br> };
	<br> typedef _fraction Fraction;
	<br> int find_gcd(int a, int b);
	<br> Fraction input_fraction();
	<br> void input_in_fractions(int n, Fraction f[n]);
	<br> Fraction add_fractions(Fraction f1, Fraction f2);
	<br> Fraction add_n_fractions(int n,Fraction f[n]);
	<br> void output(int n, Fraction f[n], Fraction sum);
<br>
	
	
<br> 20. Write a program to evaluate a polynomial at a given point using horners method. (04)
	<br> int input_degree();
	<br> float input_x();
	<br> void input_coefficients(int n, float a[n]);
	<br> float evaluate_polynomial(int n, float a[n], float x);
	<br> void out_put(int n, float a[n], float x, float result);
	<br> input:
	<br> 1 1 1
	<br> output:
	<br> 1+1\*x + 1\*x^2 at 1.000000 is 1.000000
