#include <fstream>
using namespace std;


void open_read_write_file()
{
    
    fstream f_read("test", ios::in | ios::out | ios::binary);
    
    f_read.seekg(0, ios::end);
    int length = f_read.tellg();
    f_read.seekg(0, std::ios::beg); //文件指针从新指向开头
    
    char *buffer = new char[length];
    
    f_read.read(buffer, length);    //读取
    
    f_read.write(buffer, length);   //写入
}
