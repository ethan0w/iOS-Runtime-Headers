/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UINavigationBar, UIView;

@interface PKUIServiceView : UIView  {
    UIView *_cardStackView;
    UINavigationBar *_navigationBar;
    UIView *_blackView;
}

@property UINavigationBar * navigationBar;
@property UIView * cardStackView;
@property(retain) UIView * blackView;


- (void)dealloc;
- (void)setNavigationBar:(id)arg1;
- (id)navigationBar;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBlackView:(id)arg1;
- (id)cardStackView;
- (id)blackView;
- (void)setCardStackView:(id)arg1;

@end
