/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUNowPlayingAlbumBackHeaderView, UIImageView, UITableView, UIControl, MPAVItem, UIImage, IURatingControl, MPMediaQuery, NSString;

@interface IUNowPlayingAlbumBackView : MPSwipableView  {
    MPAVItem *_item;
    int _style;
    UIImageView *_backgroundImageView;
    UITableView *_table;
    UIImageView *_bottomImageView;
    IURatingControl *_ratingControl;
    UIImageView *_topImageView;
    IUNowPlayingAlbumBackHeaderView *_headerView;
}

@property(retain) UIImage * artworkImage;
@property(readonly) UIControl * headerControl;
@property(retain) MPAVItem * item;
@property(retain) MPMediaQuery * query;
@property(readonly) IURatingControl * ratingControl;
@property int style;
@property(retain) NSString * subtitle;
@property(retain) NSString * title;


- (void)ratingControlRatingChanged:(id)arg1;
- (void)ratingControlRatingBeganTracking:(id)arg1;
- (id)headerControl;
- (void)reloadViews;
- (id)_headerView;
- (void)_reloadCoverFlowViews;
- (void)_reloadNormalViews;
- (void)_reloadCommonViews;
- (id)_bottomImageView;
- (id)_topImageView;
- (id)_backgroundImageView;
- (void)setArtworkImage:(id)arg1;
- (void)dealloc;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)item;
- (id)initWithTableView:(id)arg1;
- (int)style;
- (void)setStyle:(int)arg1;
- (id)title;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)query;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)artworkImage;
- (void)setQuery:(id)arg1;
- (void)setItem:(id)arg1;
- (id)ratingControl;

@end
