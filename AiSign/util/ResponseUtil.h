#ifndef RESPONSEUTIL_H
#define RESPONSEUTIL_H

#include <QList>
#include <QString>

class Student;
class Site;
class Period;

class ResponseUtil {
public:
    static QList<Student>    responseToStudents(const QString &jsonResponse); // HTTP 的响应转换为学生 Student 数组
    static QList<Site>       responseToSites(const QString &jsonResponse);    // HTTP 的响应转换为考点 Site 数组
    static QList<Period> responseToPeroids(const QString &jsonResponse);  // HTTP 的响应转换为考期 Period 数组
};

#endif // RESPONSEUTIL_H
