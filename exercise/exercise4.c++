#include <iostream>
// �����ͷ�ļ�
#include <pthread.h>
 
using namespace std;
 
#define NUM_THREADS 5
 
// �̵߳����к���
void* say_hello(void* args)
{
    cout << "Hello Runoob��" << endl;
    return 0;
}
 
int main()
{
    // �����̵߳� id �������������ʹ������
    pthread_t tids[NUM_THREADS];
    for(int i = 0; i < NUM_THREADS; ++i)
    {
        //���������ǣ��������߳�id���̲߳��������õĺ���������ĺ�������
        int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
        if (ret != 0)
        {
           cout << "pthread_create error: error_code=" << ret << endl;
        }
    }
    //�ȸ����߳��˳��󣬽��̲Ž������������ǿ�ƽ����ˣ��߳̿��ܻ�û��Ӧ������
    pthread_exit(NULL);
}