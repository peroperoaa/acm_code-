#include <iostream>
#include <vector>
#include <algorithm>
std::vector<int> a(6, 100);
// int arr[30] = {1, 2, 3, 4};
int main()
{
    // a.resize(9, 50);
    // std::cout << 'a' << std::endl;  
    // for(int i:a)
    //     std::cout << i << std::endl;
    // std::cout << 'b' << std::endl;  
    // std::vector <int> b = {1, 2, 3, 4, 6};
    // for(int i:b)
    //     std::cout << i << std::endl;
    // std::cout << 'c' << std::endl;
    // std::vector <int> c = a;
    // for(int i:c)
    //     std::cout << i << std::endl;
    // std::vector<int> b(arr, arr+30);
    // for(int i: b)
    //     std::cout << i << std::endl;
    std::vector<std::vector<int> > c;
    c.resize(5);
    for(int i = 0; i < 5; i++)
        c[i].resize(5, 1);
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //         std::cout << c[i][j]<< ' ';
    //     std::cout << std::endl;
    // }
    // std::vector<std::vector<int> > d = c;
    // for(int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 5; j++)
    //         std::cout << c[i][j]<< ' ';
    //     std::cout << std::endl;
    // }
    int arr[6][6];
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            arr[i][j] = i * j;
    std::vector<std::vector<int> > vec(&arr[0][0], &arr[5][5]);
    std::vector<std::vector<int> > vec1(c.begin(), c.end());
    for(int i = 0; i < vec.size(); i++)
    {
        for(int j = 0; j < vec[i].size(); j++)
            std::cout << vec[i][j] << ' ';
        std::cout << '\n';
    }
    
    return 0;
}