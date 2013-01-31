/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImageView, GKCoreTextLabel, NSString, UILabel;

@interface GKSignInHeaderView : UIView <GKTableViewCellContents> {
    NSString *_title;
    NSString *_message;
    UILabel *_titleLabel;
    GKCoreTextLabel *_messageLabel;
    UIImageView *_iconView;
    float _adjustYOffset;
}

@property(retain) NSString * title;
@property(retain) NSString * message;
@property(retain) UILabel * titleLabel;
@property(retain) GKCoreTextLabel * messageLabel;
@property(retain) UIImageView * iconView;
@property float adjustYOffset;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } confirmationButtonRect;


- (void)dealloc;
- (id)init;
- (id)theme;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)prepareForReuse;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setAdjustYOffset:(float)arg1;
- (float)adjustYOffset;
- (void)layoutSubviewsWithYOffset:(float)arg1;
- (void)setIconView:(id)arg1;
- (id)iconView;
- (void)setMessageLabel:(id)arg1;
- (id)messageLabel;
- (void)layoutSubviewsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setTitleLabel:(id)arg1;
- (float)preferredHeightForOrientation:(int)arg1;

@end
