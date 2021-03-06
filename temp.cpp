//#include <QCoreApplication>
#include <iostream>
#include <iomanip>

namespace f0{
    int f() 
    {   // деление с округлением вверх
        int a,b;

        std::cin >> a >> b;

        std::cout << (a + b - 1) / b;
        return 0;
    }
}

namespace f1 {
int f()
{
        int n, a, b, c, d;
        std::cin >> n;
        a = n % 10;
        b = (n / 10) % 10;
        c = (n / 100) % 10;
        d = (n / 1000) % 10;

        std::cout << (b * 10 + a + 1) - (c * 10 + d);
        return 0;
    }
}

namespace f2 {
    int f() {
        int n, a, b;
        std::cin >> n;
        a = n % 10 * 10 + n % 100 / 10;   // right part
        b = n / 100;   // left part

        std::cout << a + 1 - b;
        return a + 1 - b;
    }
}

namespace f3 {
    int f() {   /*    Улитка ползет по вертикальному шесту высотой H метров, поднимаясь за день на A метров, а за ночь спускаясь на B метров. На какой день улитка доползет до вершины шеста?
    Формат входных данных
    Программа получает на вход целые неотрицательные числа H, A, B, причем H > B. Числа не превосходят 100.
    Формат выходных данных
    Программа должна вывести одно натуральное число. Гарантируется, что A > B.
    */
        int h, a, b;
        int s;
        std::cin >> h >> a >> b;
        s = a - b;
        std::cout << (h + s - 1 - b) / s;
        return 0;
    }
}


namespace f4 {
    int f() {
        //Даны два целых числа. Программа должна вывести единицу, если первое число больше второго, двойку, если второе больше первого, или ноль, если они равны.
        int a, b, r;
        std::cin >> a >> b;
        r = (a > b) + 2 * (a < b);
        std::cout << r;
        return 0;
    }
}

namespace f10 {
    int f() {
        int m, n, k;
        std::cin >> m >> n;
        for (k = 0; k < m * n; k++) {
            std::cout << k << "  ";
            if (k % m == 0 || k % n == 0) std::cout << "YES";
            else std::cout << "NO";
            std::cout << std::endl;
        }
        return 0;
    }
}

namespace f11 {
    int f() {
        /* Яша плавал в бассейне размером N×M метров и устал. В этот момент он обнаружил, что находится на расстоянии X
         * метров от одного из длинных бортиков (не обязательно от ближайшего) и Y метров от одного из коротких бортиков.
         * Какое минимальное расстояние должен проплыть Яша, чтобы выбраться из бассейна на бортик? */
        int m, n, x, y;
        int min, max, l1, l2;

        std::cin >> m >> n;
        std::cin >> x >> y;

        if (m > n) {
            min = n; max = m;
        }
        else
        {
            min = m; max = n;
        }
        if (x > min / 2) x = min - x ;
        if (y > max / 2) y = max - y ;

        std::cout << (x > y ? y : x);
        return 0;
    }
}

namespace f12 {
    int f() {

        return 0;
    }
}

#include <cmath>
#include <iostream>
namespace f121 {
 //   int f() {
  //      int a, b, c;

// площадь треугольника по 3-м сторонам
void f(){
    double a,b,c;
    double angle,S1,S2;
    std::cin>>a>>b>>c;
    //  вариант 1
    angle = acos((a*a+c*c-b*b)/(2*a*c));
    S1 = 0.5*a*c*sin(angle);
    double p;
    // вариант 2
    p = 0.5*(a+b+c);
    S2 = sqrt(p*(p-a)*(p-b)*(p-c));
    std::cout<<S1<<"  "<<S2;
}
}
namespace f13 {
    int f() {
        //Дано три числа. Упорядочите их в порядке неубывания.
        int a, b, c;
        std::cin >> a >> b >> c;
        if (a > b) std::swap(a, b);
        if (b > c) std::swap(b, c);
        if (a > b) std::swap(a, b);
        std::cout << a << b << c;
        return 0;
    }
}


namespace f14 {
    /*Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.

Формат входных данных
Программа получает на вход числа A1, B1, C1, A2, B2, C2.
Формат выходных данных
Программа должна вывести одну из следующих строчек:
Boxes are equal, если коробки одинаковые,
The first box is smaller than the second one, если первая коробка может быть положена во вторую,
The first box is larger than the second one, если вторая коробка может быть положена в первую,
Boxes are incomparable, во всех остальных случаях.*/
    void f() {
        int a1, b1, c1;
        int a2, b2, c2;
        std::cin >> a1 >> b1 >> c1;
        std::cin >> a2 >> b2 >> c2;

        if (a1 > b1) std::swap(a1, b1);
        if (b1 > c1) std::swap(b1, c1);
        if (a1 > b1) std::swap(a1, b1);

        if (a2 > b2) std::swap(a2, b2);
        if (b2 > c2) std::swap(b2, c2);
        if (a2 > b2) std::swap(a2, b2);

        if (a1 == a2 && b1 == b2 && c1 == c2) std::cout << "Boxes are equal";
        else if (a1 >= a2 && b1 >= b2 && c1 >= c2) std::cout << "The first box is larger than the second one";
        else if (a1 <= a2 && b1 <= b2 && c1 <= c2) std::cout << "The first box is smaller than the second one";
        else std::cout << "Boxes are incomparable";

    }

}

namespace f15 {
    void f()
    {    // По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
        int n, i{ 1 };
        std::cin >> n;
        int s = 1;
            while (s <= n) {
                std::cout << s <<" ";
                s = (++i) * i;
            }
    }

    /* эталонное решение
    #include <iostream> 
using namespace std; 
int main(void) { 
    int n, s = 1, q = 0; 
    cin >> n; 
    while ((q +=s) <= n) { cout << q << " "; s += 2;} 
}*/

}

namespace f16 {
    // Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
    void f() {
        int n;
        std::cin >> n;
        int i = 2;
        while (n % i != 0) ++i;
        std::cout << i << " ";

    }
}

namespace f17 {
    // По данному числу N распечатайте все целые степени двойки, не превосходящие N, в порядке возрастания.
    void f() {
        int n;
        std::cin >> n;
        int  s{ 1 };

        while (s <= n) {
              std::cout << s << " ";
              s *= 2;
        }
    }


    /*  int n, s = 1, q = 0; 
    cin >> n;
    while ((q += s) <= n) { cout << q << " "; s += 2; }  
    (n + 1)^2 - n^2 = n^2 + 2n + 1 - n^2 = 2n + 1
*/
}
namespace f18 {
    // Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
    void f() {
        int n;
        std::cin >> n;
        int  s{ 1 };
// вариант 1
        if ((n & (n - 1)) == 0)  std::cout << "YES";

// вариант 2
        while (s <= n) {
            if (s == n) {
                std::cout << "YES";
                return;
            }
            s *= 2;
        }
        std::cout << "NO";

    }
}

namespace f19 {
    // Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
    void f() {
            int n, s, c{ 1 };
            std::cin >> n;
            s = n;
            while (std::cin >> n && n)
            {
                if (s < n) {
                    s = n;
                    c = 1;
                }
                else if (s == n) c++;

            }
            std::cout << c;
    }
}
namespace f20 {
    //  Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
    void f() {
        int n=1, m=0,s=0;

        while (n)
        {
            std::cin >> n;
            if (m < n) {
                s = m;
                m = n;
            }
            else if (s <n) s = n;
        }
        std::cout << s;
    }
}

namespace f22 {
    /*  Дано натуральное число A. Определите, каким по счету числом Фибоначчи оно является, 
        то есть выведите такое число N, что F(N) = A. Если А не является числом Фибоначчи, выведите число -1.
     */

    void f() {
       
        int f1{ 0 }, f2{ 1 }, fs{ 1 }, n,i=0;
        std::cin >> n;
        while (f1 < n)
        {
            f1 = f2;
            f2 = fs;
            fs = f1 + f2;
            i++;
        }
        if (f1 == n) std::cout << i ;
        else std::cout << -1;
        return;
    }
}

namespace f23 {
    /* Дана последовательность натуральных чисел, завершающаяся числом 0. Определите, какое наибольшее 
    число подряд идущих элементов этой последовательности равны друг другу. Если не нашлось ни одной пары, 
    тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1. */

    void f() {
        int a, i{ 1 }, el, nmax{ 1 };
        std::cin >> a;
        el = a;
        
        while (a != 0)
        {
          std::cin >> a;
          if (a == el) {
              i++;
              if (nmax < i) nmax = i;
          }
          else
          {
              if (i > 1) i = 1;
              el = a;
          }

        }
        std::cout << nmax;
    }

}

namespace f24 {
    /* Элемент последовательности называется локальным максимумом, если он строго 
       больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются 
       локальными максимумами.
       Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в 
       этой последовательности.*/
    void f() {
        int a, p, n{ 0 }, i{ 0 };
        std::cin >> a;
        p = a;
        while (a != 0) {
            std::cin >> n;
            if (a > p && a > n)
            {
                i++;
            }
            p = a;         
            a = n;
        }
        std::cout << i;
    }
}


//_________________________________________________________________________________
namespace f29 {
//#include<tuple>
    /* Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются 
    к сумме вклада в конце года. Вклад составляет X рублей Y копеек. Определите размер вклада через год.*/
#include <math.h>
    void f1() {
        int p, x, y, v;
        std::cin >> p >> x >> y;
        v = (100 + p) * (x * 100 + y);
        std::cout << v / 10000 << " " << v % 10000 / 100;

    }


    std::tuple<int, int> f() {
        double p, x, y, v;
        std::cin >> p >> x >> y;
        v = (1. + p / 100.) * (x * 100 + y);
        v = (1. + p / 100.) * x * 100 + (1. + p / 100.) * y;

        x = trunc(v / 100.);
        y = trunc(v - x * 100.);

        //std::cout<<x<<" "<<y;
        auto res = std::make_tuple(int(x), int(y));
        return res;
    }
}

namespace f30{
    // Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. 
    // Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
#include <math.h>

    void f() {
        int p, x, y, k,v;
        std::cin >> p >> x >> y >> k;
        
        v = (x * 100 + y);//*100;
        while(k--) v += (v * p / 100.); 
        
        std::cout << v / 100 << " " << (v % 100 );
    }

    /*int main1() {
        double p, x, y;
        int k;
        cin >> p >> x >> y >> k;

        double sum = (x * 100 + y);

        while (k--) sum = trunc(sum + sum * (p / 100));

        cout << trunc(sum / 100) << " " << sum - trunc(sum / 100) * 100;
    }  */
}
#include <iomanip> 
namespace f31 {

using namespace std;
// Определите среднее значение всех элементов последовательности, завершающейся числом 0.
    void f() {
        double a, s{ 0 };
        int n{ 0 };
        while (cin >> a && a != 0 && ++n) s += a;
        cout << std::setprecision(11)<< s / n;

    }
}

namespace f33 {
    int f() {
        double a1, b1, a2, b2, c1, c2;
        double x, y;

        std::cin >> a1 >> b1 >> a2 >> b2 >> c1 >> c2;
        double op = a1 * b2 - a2 * b1;
        if (op == 0) {
            // нет или бесконечность
            if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2) {
                //                бесконечно.
                std::cout << "dfgadfgasd";
            }
        }


        //x = ((e * d) - (f * b)) / ((a * d) - (c * b));
        //y = ((a * f) - (c * e)) / ((a * d) - (c * b));
        //std::cout << x << " " << y;
        return 0;
    }
}

// ЦИКЛЫ
#include <vector>
#include <iostream>
using namespace std;
namespace f41 {
    int f() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i]; 
        for (int i = 0; i < n; i += 2) cout << v.at(i) << " ";
        return 0;
    }

}

#include <vector>
#include <iostream>
using namespace std;
namespace f42 {
    //Выведите все четные элементы массива.
    int f() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 0; i < n; i ++) if (v[i]%2 == 0 ) cout << v[i] << " ";
        return 0;
    }

}

#include <vector>
#include <iostream>
using namespace std;
namespace f43 {
    //Найдите количество положительных элементов в данном массиве.
    int f() {
        int n, count{ 0 };
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i]; 
            if (v[i] > 0) ++count;
        }
        cout << count;
        return 0;
    }

}

#include <vector>
#include <iostream>
using namespace std;
namespace f44 {
    //Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
    int f() {
        int n;
        cin >> n;
        vector<int> v(n);
        cin >> v[0];
        for (int i = 1; i < n; i++) 
        {
            cin >> v[i]; 
            if (v[i] > v[i - 1]) cout << v[i] << " "; 
        }
        return 0;
    }

}

#include <vector>
#include <iostream>
using namespace std;
namespace f45 {
    // Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа. 
    // Если соседних элементов одного знака нет - не выводите ничего. 
    // Если таких пар соседей несколько - выведите первую пару.
    // Элементы выводятся в порядке неубывания.
    int f() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 1; i < n; i++) 
            if (v[i] * v[i - 1] > 0) {
                cout << min(v[i - 1], v[i]) << " " << max(v[i - 1], v[i]);
                break;
            }
        return 0;
    }

}

#include <vector>
#include <iostream>
using namespace std;
namespace f46 {
    //Выведите значение наименьшего из всех положительных элементов в массиве. 
    // Известно, что в массиве есть хотя бы один положительный элемент.
    int f() {
        int n, min_{ 0 };
        
        cin >> n;
        vector<int> v(n);
        
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] > 0 && (min_ == 0 || v[i] < min_)) min_ = v[i];
            
        }
        cout << min_;
        return 0;
    }

}

#include <vector>
#include <iostream>
using namespace std;
namespace f47 {
    //Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
    int f() {
        int n, min_{ 0 };

        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] %2 != 0 && (min_ == 0 || v[i] < min_)) min_ = v[i];

        }
        cout << min_;
        return 0;
    }
}

#include <vector>
#include <iostream>
using namespace std;
namespace f48 {
    // Дан список, упорядоченный по неубыванию элементов в нем. 
    // Определите, сколько в нем различных элементов.
    int f() {
        int n, count{ 1 };
        cin.clear();
        cin >> n;
        vector<int> v(n);

        cin >> v[0];
        for (int i = 1; i < n; ++i)
        {
            cin >> v[i];
            
     //       cout << v[i] << v[i - 1] << "  ";

            if (v[i] != v[i - 1]) 
            {
                ++count;
       //         cout << "!" << count << "  ";
            }
        }
        cout << count;
        cout<<"res" << endl;
        return 0;
    }
}

#include <vector>
#include <iostream>
using namespace std;
namespace f49 {
    // Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). 
    // Если элементов нечетное число, то последний элемент остается на своем месте.
    int f() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 1; i < n; i += 2) std::swap(v[i], v[i - 1]);
        for (auto e : v) cout << e << " ";
        return 0;
    }
}

#include <vector>
#include <iostream>
using namespace std;
namespace f49 {
    // Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., 
    // последний элемент переходит на место A[0]).
    int f() {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        for (int i = 1; i < n; i ++) std::swap(v[i], v[i - 1]);
        swap(v[0], v[n - 1]);
        for (auto e : v) cout << e << " ";
        return 0;
    }
}

int main(int argc, char* argv[]) {
    //   QCoreApplication a(argc, argv);
    for (int i = 0; i < 5; i++)
    {
         f49::f();                                              
        //cout << "ALICE  "<<"POLINA  "<<a + b;
    }

    //    return a.exec();          
}

