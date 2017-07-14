/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlidersCollectionView : UICollectionView {
    float  _rowHeight;
    int  _scrollDirection;
    PUSlidersCollectionViewLayout * _tableLikeLayout;
}

@property (nonatomic) float rowHeight;
@property (nonatomic) int scrollDirection;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rowHeight;
- (int)scrollDirection;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setRowHeight:(float)arg1;
- (void)setScrollDirection:(int)arg1;

@end
