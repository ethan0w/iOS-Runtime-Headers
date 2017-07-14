/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBarSeries : HKGraphSeries {
    HKFillStyle * _fillStyle;
    HKStrokeStyle * _selectedStrokeStyle;
    HKStrokeStyle * _unselectedStrokeStyle;
}

@property (nonatomic, retain) HKFillStyle *fillStyle;
@property (nonatomic, retain) HKStrokeStyle *selectedStrokeStyle;
@property (nonatomic, retain) HKStrokeStyle *unselectedStrokeStyle;

- (void).cxx_destruct;
- (void)_drawStrokeWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 context:(struct CGContext { }*)arg3 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 secondaryRenderContext:(id)arg4;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { int x1; int x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (float)distanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)fillStyle;
- (id)selectedStrokeStyle;
- (void)setFillStyle:(id)arg1;
- (void)setSelectedStrokeStyle:(id)arg1;
- (void)setUnselectedStrokeStyle:(id)arg1;
- (id)unselectedStrokeStyle;
- (float)xAxisDistanceFromPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (float)yAxisDifferenceToPoint:(struct CGPoint { float x1; float x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;

@end
