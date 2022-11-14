#include <iostream>
using namespace std;

/*заодно спрошу: 
можно ли использовать json библиотеку для упрощения работы ?
например, от nlohmann ?*/

//зададим пи как константу, можно и через стандартную библиотеку, но так интереснее :)
const long double PI = 3.141592653589793238462643383279502884L; 

//предварительно объявляем прототипы ф-ций по порядку задач  
double trapezoid(double b1, double b2, double h); //в большинстве задач используем doulbe для расширения диапазона значений
void circle(double r);
void triangle(double a, double b);
int sum(int num);
void cartesian_to_polar(double x, double y);
void polar_to_cartesian(double ro, double fi);
void answer_q(double fst_coef, double sec_coef, double free_term);
void finding_medians(double& fst_side, double& sec_side, double& trd_side);
int hours(int k);
int minutes(int k);
float price(float n);
void friendly_advice(int height, int weight);
int negotiate(int time, int day);
void months(int n);
bool lucky(int a);
string kopeika(int n);
bool palindrome(double n);
//на самом деле, мы допускаем отприцательные значения в части задач, например, в 1-ой -> не совершаем обработку ошибок на отрицательные значения

int main() {
    int number_of_the_task;
    cout << "Hey! What task are you feeling like doing? ";
    cin >> number_of_the_task;
    switch (number_of_the_task) {
    case 1:
        double b1;
        double b2;
        double h;
        cout << "Enter b1 = ";
        cin >> b1;
        cout << "Enter b2 = ";
        cin >> b2;
        cout << "Enter h = ";
        cin >> h;
        cout << trapezoid(b1, b2, h);
        break;

    case 2:
        double r;
        cout << "Enter r = ";
        cin >> r;
        circle(r);
        break;

    case 3:
        double a;
        double b;
        cout << "Enter a = ";
        cin >> a;
        cout << "Enter b = ";
        cin >> b;
        triangle(a, b);
        break;

    case 4:
        int num;
        cout << "Enter num = ";
        cin >> num;
        cout << "The sum is " << sum(num);
        break;

    case 5:
        double x;
        double y;
        cout << "Enter x = ";
        cin >> x;
        cout << "Enter y = ";
        cin >> y;
        cartesian_to_polar(x, y);
        break;

    case 6:
        double ro;
        double fi;
        cout << "Enter ro = ";
        cin >> ro;
        cout << "Enter fi = ";
        cin >> fi;
        polar_to_cartesian(ro, fi);
        break;

    case 7:
        double first_coef;
        cout << "Enter first coefficient = ";
        cin >> first_coef;
        double second_coef;
        cout << "Enter second coefficient = ";
        cin >> second_coef;
        double free_coef;
        cout << "Enter free coefficient = ";
        cin >> free_coef;
        answer_q(first_coef, second_coef, free_coef);
        break;

    case 8:
        double fst_side;
        cout << "Enter 1st side = ";
        cin >> fst_side;
        double sec_side;
        cout << "Enter 2nd side = ";
        cin >> sec_side;
        double trd_side;
        cout << "Enter 3rd side = ";
        cin >> trd_side;
        finding_medians(fst_side, sec_side, trd_side);
        finding_medians(fst_side, sec_side, trd_side);
        break;
    default:
        cout << "Ooops, try again!";

    case 9:
        int k1;
        cout << "What second of the day it is?" << endl;
        cin >> k1;
        cout << "What is your loacal time? " << hours(k1) << ":" << minutes(k1);
        break;

    case 11:
        float n;
        cout << "Insert the summed cost of your purchase: ";
        cin >> n;
        cout << "Your purchase is: " << price(n) << endl;
        break;

    case 12:
        int height, weight;
        cout << "Enter your height: " << endl;
        cin >> height;
        cout << "Enter your weight: " << endl;
        cin >> weight;
        friendly_advice(height, weight);
        break;

    case 14:
        int time, day;
        cout << "Try to remember the time you spent negotiating: " << endl;
        cin >> time;
        cout << "Enter the number of the week day the call-up was happening" << endl;
        cin >> day;
        cout << "Well, the charge is: " << negotiate(time, day);
        break;

    case 15:
        int month;
        cout << "Enter the number of the month: ";
        cin >> month;
        months(month);
        break;

    case 16:
        int number;
        cout << "Wanna gamble a bit? Insert the number you consider lucky: ";
        cin >> number;
        (lucky(number)) ? cout << "Good intuition! It is, indeed, lucky!" : cout << "Nothing to see here, unfortunately";
        break;

    case 17:
        int kopeyka;
        cout << "Enter the number from 1 to 99\n";
        cin >> kopeyka;
        cout << "You sure have " << kopeyka << " " << kopeika(kopeyka);
        break;

    case 18:
        double n2;
        cout << "Enter an integer number: ";
        cin >> n2;
        (palindrome(n))? cout << n2 << " is a Palindrome" : cout << n2 << "  not a Palindrome";
        break;
    }
}

double trapezoid(double b1, double b2, double h) { 
    double square = ((b1 + b2) / 2) * h;
    cout << "The area of this trapezoid is: ";
    return square;
}

void circle(double r) {
    double length_circle = 2 * PI * r;
    double area_circle = PI * pow(r, 2);
    cout << "The length is: " << length_circle << endl;
    cout << "The area is " << area_circle;
}

void triangle(double a, double b) {
    double area_tr = (a * b) / 2;
    double hypotenuse = sqrt(pow(a, 2) + pow(b, 2));
    cout << "The area is: " << area_tr << endl;
    cout << "The hypotenuse is: " << hypotenuse;
}

int sum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }
    return sum;
}

void cartesian_to_polar(double x, double y) {
    double ro = sqrt(pow(x, 2) + pow(y, 2));
    double fi = atan(y/x);
    cout << "We've calculated it! Ro is: " << ro << endl;
    cout << "And Fi is: " << fi;
}

void polar_to_cartesian(double ro, double fi) {
    double x = ro * cos(fi);
    double y = ro * sin(fi);
    cout << "Finally, X is: " << x << endl;
    cout << "Y is: " << y;
}

void answer_q(double fst_coef, double sec_coef, double free_term) {
    double discriminant = pow(sec_coef, 2) - 4 * fst_coef * free_term;
    if (fst_coef == 0) {
        double root = (-1 * free_term) / (sec_coef);
        cout << "root = " << root << endl;
    }
    else {
        if (discriminant >= 0) {
            double root1 = ((-1 * sec_coef + sqrt(discriminant)) / (2 * fst_coef));
            double root2 = ((-1 * sec_coef - sqrt(discriminant)) / (2 * fst_coef));
            cout << "The first root is = " << root1 << endl;
            cout << "The second root is = " << root2 << endl;
        } else {
            cout << "Ooops! No values on the real axis - Incert different coefficients.";
        }
    }
}

void finding_medians(double& fst_side, double& sec_side, double& trd_side) {
    if ((fst_side <= 0) || (fst_side <= 0) || (fst_side <= 0)) //ставим ограничение на отрицательные значения 
    {
        cout << "Ooops! Insert a positive number";

    } else {
        double fst_med = sqrt(2 * fst_side * fst_side + 2 * sec_side * sec_side - trd_side * trd_side) / 2; //ищем медианы через три прямые
        double sec_med = sqrt(2 * fst_side * fst_side + 2 * trd_side * trd_side - sec_side * sec_side) / 2;
        double trd_med = sqrt(2 * sec_side * sec_side + 2 * trd_side * trd_side - fst_side * fst_side) / 2;
        /*
        double fst_med = sqrt(2 * m1 * m1 + 2 * m2 * m2 - m3 * m3) / 2;
        double sec_med = sqrt(2 * m1 * m1 + 2 * m3 * m3 - m2 * m2) / 2; эта реализация возможна, но проще вызвать функцию 2 раза
        double trd_med = sqrt(2 * m3 * m3 + 2 * m2 * m2 - m1 * m1) / 2;
        */ 
        cout << "The first median is: " << fst_med << " The second median is: " << sec_med << " The third median is: " << trd_med;
    }
}

int hours(int k) {
    if (k > 86399) {
        k /= 86400;
    }
    return k / 3600;
}

int minutes(int k) {
    if (k > 86399) {
        k /= 86400;
    }
    return (k - hours(k) * 3600) / 60;
}

float price(float n) {
    if (n > 1000) {
        return 0.9 * n;
    }
    else {
        return n;
    }
}

void friendly_advice(int height, int weight) {
    int a = height - weight;
    if (a == 100) {
        cout << "They say that Bella Hadid is the perfection. Well, they're lying. You are!" << endl;
    }
    else if (a > 100) {
        cout << "You might want to consider gaining some weight." << endl;
    }
    else {
        cout << "Overweight is a judgement call." << endl;
    }
}

int negotiate(int time, int day) {
    if (day > 7) {
        day %= 7;
    }
    if (day < 6) {
        return time;
    }
    else {
        return time * 0.8;
    }
}

void months(int n) {
    if (n < 1) {
        n = 12 - abs(n) % 12;
    }
    if (n > 12) {
        n %= 12;
    }
   
    switch (n) {
    case 1:
        cout << "The fresh start - January, Winter";
        break;
    case 2:
        cout << "Sounds romantic, huh? February, Winter";
        break;
    case 3:
        cout << "Yeah, the allergy's here - March, Spring";
        break;
    case 4:
        cout << "Just a month - April, Spring";
        break;
    case 5:
        cout << "Almost there! May, Spring";
        break;
    case 6:
        cout << "Yeah, the pupils shall celebrate - June, Summer";
        break;
    case 7:
        cout << "Halfway through it - July, Summer";
        break;
    case 8:
        cout << "Can we get the most of it? August, Summer";
        break;
    case 9:
        cout << "Never stop being eager to learn - September, Autumn";
        break;
    case 10:
        cout << "No way that's the rain - October, Autumn";
        break;
    case 11:
        cout << "Too cool in itself - November, Autumn";
        break;
    case 12:
        cout << "New year, New You - December, Winter";
        break;
    }
}

bool lucky(int a) {
    int b = a % 1000;
    a /= 1000;
    return sum(a) == sum(b);
}

string kopeika(int n) {
    if (11 <= n and n <= 20) {
        return "Kopeek";
    }
    if (2 <= n % 10 and n % 10 <= 4) {
        return "Kopeyki";
    }
    if ((n % 10 == 1) and (n != 11)) {
        return "Kopeyka";
    }
    else {
        return "Kopeek";
    }
}

bool palindrome(double n) {
    int a = 0;
    long b = n;
    while (b != 0) {
        a = a * 10 + b % 10;
        b /= 10;
    }
    //палиндром, когда n и его отражение равны
    return a == n;
}

    