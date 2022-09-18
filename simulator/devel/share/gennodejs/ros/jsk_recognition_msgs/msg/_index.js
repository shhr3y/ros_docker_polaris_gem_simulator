
"use strict";

let Accuracy = require('./Accuracy.js');
let BoolStamped = require('./BoolStamped.js');
let BoundingBox = require('./BoundingBox.js');
let BoundingBoxArray = require('./BoundingBoxArray.js');
let BoundingBoxArrayWithCameraInfo = require('./BoundingBoxArrayWithCameraInfo.js');
let BoundingBoxMovement = require('./BoundingBoxMovement.js');
let Circle2D = require('./Circle2D.js');
let Circle2DArray = require('./Circle2DArray.js');
let ClassificationResult = require('./ClassificationResult.js');
let ClusterPointIndices = require('./ClusterPointIndices.js');
let ColorHistogram = require('./ColorHistogram.js');
let ColorHistogramArray = require('./ColorHistogramArray.js');
let ContactSensor = require('./ContactSensor.js');
let ContactSensorArray = require('./ContactSensorArray.js');
let DepthCalibrationParameter = require('./DepthCalibrationParameter.js');
let DepthErrorResult = require('./DepthErrorResult.js');
let HeightmapConfig = require('./HeightmapConfig.js');
let Histogram = require('./Histogram.js');
let HistogramWithRange = require('./HistogramWithRange.js');
let HistogramWithRangeArray = require('./HistogramWithRangeArray.js');
let HistogramWithRangeBin = require('./HistogramWithRangeBin.js');
let HumanSkeleton = require('./HumanSkeleton.js');
let HumanSkeletonArray = require('./HumanSkeletonArray.js');
let ICPResult = require('./ICPResult.js');
let ImageDifferenceValue = require('./ImageDifferenceValue.js');
let Int32Stamped = require('./Int32Stamped.js');
let Label = require('./Label.js');
let LabelArray = require('./LabelArray.js');
let Line = require('./Line.js');
let LineArray = require('./LineArray.js');
let ModelCoefficientsArray = require('./ModelCoefficientsArray.js');
let Object = require('./Object.js');
let ObjectArray = require('./ObjectArray.js');
let ParallelEdge = require('./ParallelEdge.js');
let ParallelEdgeArray = require('./ParallelEdgeArray.js');
let PeoplePose = require('./PeoplePose.js');
let PeoplePoseArray = require('./PeoplePoseArray.js');
let PlotData = require('./PlotData.js');
let PlotDataArray = require('./PlotDataArray.js');
let PointsArray = require('./PointsArray.js');
let PolygonArray = require('./PolygonArray.js');
let PosedCameraInfo = require('./PosedCameraInfo.js');
let Rect = require('./Rect.js');
let RectArray = require('./RectArray.js');
let RotatedRect = require('./RotatedRect.js');
let RotatedRectStamped = require('./RotatedRectStamped.js');
let Segment = require('./Segment.js');
let SegmentArray = require('./SegmentArray.js');
let SegmentStamped = require('./SegmentStamped.js');
let SimpleHandle = require('./SimpleHandle.js');
let SimpleOccupancyGrid = require('./SimpleOccupancyGrid.js');
let SimpleOccupancyGridArray = require('./SimpleOccupancyGridArray.js');
let SlicedPointCloud = require('./SlicedPointCloud.js');
let SnapItRequest = require('./SnapItRequest.js');
let SparseImage = require('./SparseImage.js');
let SparseOccupancyGrid = require('./SparseOccupancyGrid.js');
let SparseOccupancyGridArray = require('./SparseOccupancyGridArray.js');
let SparseOccupancyGridCell = require('./SparseOccupancyGridCell.js');
let SparseOccupancyGridColumn = require('./SparseOccupancyGridColumn.js');
let Spectrum = require('./Spectrum.js');
let TimeRange = require('./TimeRange.js');
let Torus = require('./Torus.js');
let TorusArray = require('./TorusArray.js');
let TrackerStatus = require('./TrackerStatus.js');
let TrackingStatus = require('./TrackingStatus.js');
let VectorArray = require('./VectorArray.js');
let WeightedPoseArray = require('./WeightedPoseArray.js');

module.exports = {
  Accuracy: Accuracy,
  BoolStamped: BoolStamped,
  BoundingBox: BoundingBox,
  BoundingBoxArray: BoundingBoxArray,
  BoundingBoxArrayWithCameraInfo: BoundingBoxArrayWithCameraInfo,
  BoundingBoxMovement: BoundingBoxMovement,
  Circle2D: Circle2D,
  Circle2DArray: Circle2DArray,
  ClassificationResult: ClassificationResult,
  ClusterPointIndices: ClusterPointIndices,
  ColorHistogram: ColorHistogram,
  ColorHistogramArray: ColorHistogramArray,
  ContactSensor: ContactSensor,
  ContactSensorArray: ContactSensorArray,
  DepthCalibrationParameter: DepthCalibrationParameter,
  DepthErrorResult: DepthErrorResult,
  HeightmapConfig: HeightmapConfig,
  Histogram: Histogram,
  HistogramWithRange: HistogramWithRange,
  HistogramWithRangeArray: HistogramWithRangeArray,
  HistogramWithRangeBin: HistogramWithRangeBin,
  HumanSkeleton: HumanSkeleton,
  HumanSkeletonArray: HumanSkeletonArray,
  ICPResult: ICPResult,
  ImageDifferenceValue: ImageDifferenceValue,
  Int32Stamped: Int32Stamped,
  Label: Label,
  LabelArray: LabelArray,
  Line: Line,
  LineArray: LineArray,
  ModelCoefficientsArray: ModelCoefficientsArray,
  Object: Object,
  ObjectArray: ObjectArray,
  ParallelEdge: ParallelEdge,
  ParallelEdgeArray: ParallelEdgeArray,
  PeoplePose: PeoplePose,
  PeoplePoseArray: PeoplePoseArray,
  PlotData: PlotData,
  PlotDataArray: PlotDataArray,
  PointsArray: PointsArray,
  PolygonArray: PolygonArray,
  PosedCameraInfo: PosedCameraInfo,
  Rect: Rect,
  RectArray: RectArray,
  RotatedRect: RotatedRect,
  RotatedRectStamped: RotatedRectStamped,
  Segment: Segment,
  SegmentArray: SegmentArray,
  SegmentStamped: SegmentStamped,
  SimpleHandle: SimpleHandle,
  SimpleOccupancyGrid: SimpleOccupancyGrid,
  SimpleOccupancyGridArray: SimpleOccupancyGridArray,
  SlicedPointCloud: SlicedPointCloud,
  SnapItRequest: SnapItRequest,
  SparseImage: SparseImage,
  SparseOccupancyGrid: SparseOccupancyGrid,
  SparseOccupancyGridArray: SparseOccupancyGridArray,
  SparseOccupancyGridCell: SparseOccupancyGridCell,
  SparseOccupancyGridColumn: SparseOccupancyGridColumn,
  Spectrum: Spectrum,
  TimeRange: TimeRange,
  Torus: Torus,
  TorusArray: TorusArray,
  TrackerStatus: TrackerStatus,
  TrackingStatus: TrackingStatus,
  VectorArray: VectorArray,
  WeightedPoseArray: WeightedPoseArray,
};
