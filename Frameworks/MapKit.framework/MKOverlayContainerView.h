/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <MKOverlayContainerViewDelegate>, NSMutableSet, NSArray, NSMutableArray, NSMapTable;

@interface MKOverlayContainerView : UIView  {
    NSMutableSet *_overlaySet;
    NSMutableArray *_overlays;
    NSMapTable *_overlayToView;
    NSMutableArray *_views;
    NSMutableArray *_viewClusters;
    <MKOverlayContainerViewDelegate> *_delegate;
    float _mapZoomScale;
}

@property <MKOverlayContainerViewDelegate> * delegate;
@property float mapZoomScale;
@property(readonly) NSArray * overlays;


- (void)addOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (id)overlays;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setDrawingEnabled:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)mapZoomScale;
- (void)swapViewsWithOverlay:(id)arg1 andOverlay:(id)arg2;
- (void)_addInternalOverlay:(id)arg1 withView:(id)arg2;
- (void)visibleRectChanged;
- (void)_coalesceAdjacentClusters;
- (id)_considerAddingOverlayView:(id)arg1 inAddRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_removeOverlayView:(id)arg1 forOverlay:(id)arg2 coalesce:(BOOL)arg3;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFractionOfVisible:(double)arg1;
- (void)_configureAndAddView:(id)arg1 forOverlay:(id)arg2;
- (void)_insertOverlayView:(id)arg1 forOverlay:(id)arg2 atIndex:(int)arg3;
- (int)_viewIndexForOverlayView:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned int)arg1 withOverlayAtIndex:(unsigned int)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned int)arg2;
- (void)removeOverlays:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)setMapZoomScale:(float)arg1;
- (void)addAndRemoveOverlayViews;
- (void)setLevelCrossFade:(BOOL)arg1;

@end
