#include "db.h"

DB::DB()
{



    // 指定要创建的文件夹的绝对路径（Windows示例）,ruanko是要创建的文件夹
       QString folderPath = "D:/program/QT/DBMS/Ruanko";
       // 创建一个QDir对象来管理文件夹
       QDir dir;



       if (!dir.exists(folderPath)) {
             // 如果不存在，创建文件夹
             if (dir.mkpath(folderPath)) {
                 qDebug() << "Folder created successfully at" << folderPath;
             } else {
                 qDebug() << "Error creating folder.";
             }
         } else {
             qDebug() << "Folder already exists at" << folderPath;
         }

       // 检查文件夹是否已经存在
       if (!dir.exists(folderPath)) {
           // 如果不存在，创建文件夹
           if (dir.mkdir(folderPath)) {
               qDebug() << "Folder created successfully."<<folderPath;
           } else {
               qDebug() << "Error creating folder.";
           }
       } else {
           qDebug() << "Folder already exists."<<folderPath;
       }
}
