/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCurrentTimeMarkerView : UIView  {
    unsigned int _showsThumb : 1;
    unsigned int _showsLine : 1;
}

@property BOOL showsThumb;
@property BOOL showsLine;
@property(readonly) float markerWidth;
@property(readonly) float markerMidHeight;


- (void)dealloc;
- (float)markerWidth;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)showsThumb;
- (BOOL)showsLine;
- (float)markerMidHeight;
- (void)setShowsLine:(BOOL)arg1;
- (void)setShowsThumb:(BOOL)arg1;

@end
