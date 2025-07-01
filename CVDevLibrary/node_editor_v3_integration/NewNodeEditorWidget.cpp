#include "NewNodeEditorWidget.h"

// Include headers for the example Node Data Models
#include "example_models/NumberSourceModel.hpp"
#include "example_models/AdditionModel.hpp"
#include "example_models/ResultModel.hpp"

// Include additional Node Editor V3 utility headers (optional but useful)
#include <QtNodes/NodeDataModel>
#include <QtNodes/ConnectionStyle>
#include <QtNodes/StyleCollection> // For setting global styles

NewNodeEditorWidget::NewNodeEditorWidget(QWidget *parent)
    : QWidget(parent)
{
    // 1. Initialize Node Editor V3 styles (Optional, but makes it look better)
    QtNodes::ConnectionStyle::setConnectionStyle(
        QtNodes::ConnectionStyle::construct<QtNodes::ConnectionStyle::BezierCurved>());
    // You can customize the connection style here, e.g., using:
    // QtNodes::ConnectionStyle::setConnectionStyle(QtNodes::ConnectionStyle::construct<QtNodes::ConnectionStyle::Straight>());

    // 2. Create the DataFlowGraphModel and register Node Data Models
    // This is where you tell the editor what types of nodes it can create.
    _graphModel = new QtNodes::DataFlowGraphModel(
        QtNodes::NodeDataModelRegistry::RegistryPtr(new QtNodes::NodeDataModelRegistry())
    );

    // Register example Node Data Models that you copied in Step 4
    // NOTE: You must include their headers above.
    _graphModel->registry().registerDataModel<QtNodes::NumberSourceModel>();
    _graphModel->registry().registerDataModel<QtNodes::AdditionModel>();
    _graphModel->registry().registerDataModel<QtNodes::ResultModel>();

    // 3. Create the Graphics Scene and View
    _scene = new QtNodes::NodeGraphicsScene(*_graphModel, this);
    _view = new QtNodes::NodeGraphicsView(_scene, this);

    // Optional: Set a background color for the scene if you want
    _scene->setBackgroundBrush(QColor(250, 250, 250)); // Light gray background

    // 4. Set up the layout for this widget
    _layout = new QVBoxLayout(this);
    _layout->addWidget(_view);
    setLayout(_layout); // Set the layout for the NewNodeEditorWidget

    // Set a minimum size for the widget so it doesn't collapse
    setMinimumSize(600, 400); // Adjust as needed
}

NewNodeEditorWidget::~NewNodeEditorWidget()
{
    // Qt's parent-child ownership handles deletion of _scene, _view, _layout
    // But it's good practice to delete dynamically allocated objects that don't have parents
    delete _graphModel; // This is the only one we explicitly allocated without a parent
}