#ifndef NEW_NODE_EDITOR_WIDGET_H
#define NEW_NODE_EDITOR_WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QVBoxLayout>

// Include headers from the Node Editor V3 library
#include <QtNodes/DataFlowGraphModel> // Required for DataFlowGraphModel
#include <QtNodes/NodeGraphicsScene>   // Required for NodeGraphicsScene
#include <QtNodes/NodeGraphicsView>    // Required for NodeGraphicsView

class NewNodeEditorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit NewNodeEditorWidget(QWidget *parent = nullptr);
    ~NewNodeEditorWidget();

private:
    // Pointers to the core components of Node Editor V3
    QtNodes::DataFlowGraphModel* _graphModel;
    QtNodes::NodeGraphicsScene* _scene;
    QtNodes::NodeGraphicsView* _view;

    // Layout for the widget
    QVBoxLayout* _layout;
};

#endif // NEW_NODE_EDITOR_WIDGET_H