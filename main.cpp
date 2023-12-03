#include "template_inverse.cpp"
#include "queue.h"
int main()
{
    int massive[]={1,2,3,4,5,6};
    size_t size  = sizeof(massive)/sizeof(massive[0]);

    template_inverse(massive,size);

    for (size_t i = 0; i < size; i++)
    {
        cout<<massive[i]<<"\t";
    }
    cout<<"\n\n";

    queue<int> q;

    q.push(2);
    q.push(13);
    q.push(5);
    q.show();
    
    return 0;
}

#include "queue.cpp"