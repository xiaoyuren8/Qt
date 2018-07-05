#ifndef KPEDITOR_H
#define KPEDITOR_H

#include <QWidget>
#include <QModelIndex>
#include <QDir>

class KpService;
class QStandardItemModel;

namespace Ui {
class KpEditor;
}

/**
 * 知识点编辑
 */
class KpEditor : public QWidget {
    Q_OBJECT

public:
    explicit KpEditor(bool readOnly = false, QWidget *parent = 0);
    ~KpEditor();

    bool isOkButtonClickedInReadOnlyMode() const; // 只读模式时点击了 Ok 按钮
    QStringList getSelectedKp() const; // 第 0 个字符串为知识点名字，第 2 个字符串为知识点编码

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;

private:
    void initialize();   // 初始化
    void handleEvents(); // 事件处理
    void createSubjectsContextMenu(); // 创建左侧学科的右键菜单
    void createKpsContextMenu();      // 创建中间知识点右键菜单
    void resetKps(); // 重置知识点

    bool validate() const; // 校验学科和知识点的编码是否唯一，未被重复使用
    void save(); // 调用 saveSubjects() and saveKps()
    void openSubjects(); // 打开学科到左侧的教材目录树中
    void openSubjectKps(const QString &subjectCode); // 打开学科的知识点到右侧的知识点树中

    QModelIndex currentLeftIndex() const; // 左侧学科的树中当前选中节点的 index
    QModelIndex currentKpIndex() const;   // 右侧知识点树中当前选中节点的 index

    Ui::KpEditor *ui;
    QStandardItemModel *subjectsModel = NULL; // 学科的 model
    QStandardItemModel *kpsModel      = NULL; // 知识点 model
    QModelIndex leftClickedLeftIndex; // 右键点击的左边 index
    QModelIndex rightClickedKpIndex;  // 右键点击知识点 index

    bool readOnly = false; // 只读
    bool okButtonClickedInReadOnlyMode = false; // 只读模式时点击了 Ok 按钮
    KpService *kpService = NULL;
    QDir kpsDir; // 教材所在文件夹
};

#endif // KPEDITOR_H
