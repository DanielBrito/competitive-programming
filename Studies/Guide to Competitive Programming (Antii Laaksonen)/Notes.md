# Guide to Competitive Programming (Antii Laaksonen) - Notes

## 2.1 Language Features

Default template:

```
#include <bits/stdc++.h>

using namespace std;

int main() {
  // solution comes here
}
```

The `#include` line at the beginning of the code is a feature of the g++ compiler that allows us to include the entire standard library (iostream, vector, algorithm etc.)

The code can be compiled using the following command:

```
g++ -std=c++11 -O2 -Wall test.cpp -o test
```

This command produces a binary file test from the source code test.cpp. The compiler follows the C++11 standard (-std=c++11), optimizes the code (-O2), and shows warnings about possible errors (-Wall).

### 2.1.1 Input and Output

Input and output is sometimes a bottleneck in the program. The following lines at the beginning of the code make input and output more efficient:

```
ios::sync_with_stdio(0);
cin.tie(0);
```

Note that the newline `"\n"` works faster than `endl`, because `endl` always causes a flush operation.

The C functions `scanf` and `printf` are an alternative to the C++ standard streams. They are usually slightly faster, but also more difficult to use.

Sometimes the program shouldread awhole input line, possibly containing spaces. This can be accomplished by using the getline function:

```
string s;
getline(cin, s);
```

If the amount of data is unknown (EOF), the following loop is useful:

```
while (cin >> x) {
  // code
}
```

This loop reads elements from the input one after another, until there is no more data available in the input.

### 2.1.2 Working with Numbers

<table class="table table-bordered" style="text-align:center;">
<tr>
<th style="text-align:center;">Type</th>
<th style="text-align:center;">Typical Bit Width</th>
<th style="text-align:center;">Typical Range</th>
</tr>
<tr>
<td>char</td>
<td>1byte</td>
<td>-127 to 127 or 0 to 255</td>
</tr>
<tr>
<td>unsigned char</td>
<td>1byte</td>
<td>0 to 255</td>
</tr>
<tr>
<td>signed char</td>
<td>1byte</td>
<td>-127 to 127</td>
</tr>
<tr>
<td>int</td>
<td>4bytes</td>
<td>-2147483648 to 2147483647</td>
</tr>
<tr>
<td>unsigned int</td>
<td>4bytes</td>
<td>0 to 4294967295</td>
</tr>
<tr>
<td>signed int</td>
<td>4bytes</td>
<td>-2147483648 to 2147483647</td>
</tr>
<tr>
<td>short int</td>
<td>2bytes</td>
<td>-32768 to 32767</td>
</tr>
<tr>
<td>unsigned short int</td>
<td>2bytes</td>
<td>0 to 65,535</td>
</tr>
<tr>
<td>signed short int</td>
<td>2bytes</td>
<td>-32768 to 32767</td>
</tr>
<tr>
<td>long int</td>
<td>8bytes</td>
<td>-2,147,483,648 to 2,147,483,647</td>
</tr>
<tr>
<td>signed long int</td>
<td>8bytes</td>
<td>same as long int</td>
</tr>
<tr>
<td>unsigned long int</td>
<td>8bytes</td>
<td>0 to 18,446,744,073,709,551,615</td>
</tr>
<tr>
<td>long long int</td>
<td>8bytes</td>
<td>-(2^63) to (2^63)-1</td>
</tr>
<tr>
<td>unsigned long long int</td>
<td>8bytes</td>
<td>0 to 18,446,744,073,709,551,615</td>
</tr>
<tr>
<td>float</td>
<td>4bytes</td>
<td></td>
</tr>
<tr>
<td>double</td>
<td>8bytes</td>
<td></td>
</tr>
<tr>
<td>long double</td>
<td>12bytes</td>
<td></td>
</tr>
<tr>
<td>wchar_t</td>
<td>2 or 4 bytes</td>
<td>1 wide character</td>
</tr>
</table>

The following code defines a long long variable:

```
long long x = 123456789123456789LL;
```

**Modular Arithmetic** Sometimes, the answer to a problem is a very large number, but it is enough to output it “modulo m”, i.e., the remainder when the answer is
divided by m (e.g., “modulo 109 + 7”). The idea is that even if the actual answer is very large, it suffices to use the types int and long long.

We denote by `x mod m` the remainder when `x` is divided by `m`. For example, `17 mod 5 = 2`, because `17 = 3 · 5 + 2`. An important property of remainders is that the following formulas hold:

- _(a + b) mod m = (a mod m + b mod m) mod m_

- _(a − b) mod m = (a mod m − b mod m) mod m_

- _(a · b) mod m = (a mod m · b mod m) mod m_

Thus, we can take the remainder after every operation, and the numbers will never become too large.

**Floating Point Numbers** The required precision of the answer is usually given in the problem statement. An easy way to output the answer is to use the printf function and give the number of decimal places in the formatting string. For example, the following code prints the value of x with 9 decimal places:

```
printf("%.9f\n", x);
```

### 2.1.3 Shortening Code

Type Names The command typedef can be used to give a short name to a data type. For example, the name `long long` is long, so we can define a short name `ll` as follows:

```
typedef long long ll;

ll a = 123456789;
ll b = 987654321;
cout << a*b << "\n";
```

The command typedef can also be used with more complex types. For example, the following code gives the name `vi` for a vector of integers, and the name `pi` for a pair that contains two integers.

```
typedef vector<int> vi;
typedef pair<int,int> pi;
```

**Macros** Another way to shorten code is to define macros. A macro specifies that certain strings in the code will be changed before the compilation. In C++, macros are defined using the #define keyword.

For example, we can define the following macros:

```
#define F first
#define S second
#define PB push_back
#define MP make_pair
```

After this, the code can be shortened as follows:

```
v.PB(MP(y1,x1));
v.PB(MP(y2,x2));
int d = v[i].F+v[i].S;
```
