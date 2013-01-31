/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKMultilineCellContentView, UIView;

@interface GKDualThreeLineCellContents : UIView <GKTableViewCellContents> {
    UIView *_separatorView;
    GKMultilineCellContentView *_topContents;
    GKMultilineCellContentView *_bottomContents;
}

@property(retain) GKMultilineCellContentView * topContents;
@property(retain) GKMultilineCellContentView * bottomContents;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;


- (void)dealloc;
- (id)init;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)bottomContents;
- (id)topContents;
- (void)setBottomContents:(id)arg1;
- (void)setTopContents:(id)arg1;
- (float)preferredHeightForOrientation:(int)arg1;

@end
