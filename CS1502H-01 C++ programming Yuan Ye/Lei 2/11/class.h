#ifndef CLASS_H
#define CLASS_H
class String {
private:
      char *myStr;
      int myLen;
public:
      // TO DO
       // 默认构造函数
    String(char *myStr);
    // 复制构造函数
    String(String &str);
    // 析构函数
    ~String();
    // 0:获取字符串长度
    int length();
    // 1:求子字符串[start,start+n-1]
    void substr(int start, int n);
    // 2:查找首次出现字符c的位置
    int find_first_of(char c);
    // 3:在index处添加字符c
    void add_before(int index, char c);
    // 4:删除某个位置上的字符
    void delete_at (int index);
    // 5:输出字符串
    void printStr ();
};




#endif /* CLASS_H */