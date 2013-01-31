/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKRatingControl, NSString, GKCoreTextLabel;

@interface GKPurchasableGameTitleView : GKGameTitleView  {
    float _ratingStarValue;
    int _ratingCount;
    NSString *_developerName;
    GKCoreTextLabel *_developerLabel;
    GKRatingControl *_ratingControl;
    GKCoreTextLabel *_ratingLabel;
    BOOL _hideRating;
}

@property BOOL hideRating;
@property float ratingStarValue;
@property int ratingCount;
@property(retain) NSString * developerName;
@property(retain) GKCoreTextLabel * developerLabel;
@property(retain) GKCoreTextLabel * ratingLabel;
@property(retain) GKRatingControl * ratingControl;


- (void)dealloc;
- (id)init;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (BOOL)hideRating;
- (void)setDeveloperLabel:(id)arg1;
- (float)ratingStarValue;
- (int)ratingCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutDeveloperNameWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)developerName;
- (id)developerLabel;
- (void)setRatingControl:(id)arg1;
- (void)setRatingLabel:(id)arg1;
- (id)ratingLabel;
- (id)ratingControl;
- (void)setHideRating:(BOOL)arg1;
- (void)setRatingStarValue:(float)arg1;
- (void)setRatingCount:(int)arg1;
- (void)setDeveloperName:(id)arg1;

@end
