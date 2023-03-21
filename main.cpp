#include <QCoreApplication>
#include <algorithm>
#include <stdio.h>
#include <iostream>
#include <thread>
#include <QDebug>
#include <boost/algorithm/string.hpp>
#include <math.h>

using namespace std;
using namespace boost::algorithm;

#define MAX_ARRAY 10

int compare(int a, int b)
{
    return a < b;
}

void update_array(int a[MAX_ARRAY])
{
    for(int i = 0; i < MAX_ARRAY; i++){
        a[i] += 1;
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Nguyen Hoang Trung test

    int b[MAX_ARRAY] = {0, 2, 1, 4, 3, 6, 5, 8, 7, 9};
    sort(b, b+MAX_ARRAY, compare);

    for(int i = 0; i < MAX_ARRAY; i++){
        printf("%d sbc \n", b[i]);
    }

    update_array(b);

    for(int i = 0; i < MAX_ARRAY; i++){
        printf("%d \n", b[i]);
    }

    update_array(b);

    for(int i = 0; i < MAX_ARRAY; i++){
        printf("%d \n", b[i]);
    }

    return a.exec();
}
