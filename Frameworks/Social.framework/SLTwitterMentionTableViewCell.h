/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UILabel, SLTwitterUserRecord, SLTwitterMentionImageView, SLTwitterSession;

@interface SLTwitterMentionTableViewCell : UITableViewCell  {
    SLTwitterMentionImageView *_iconView;
    UILabel *_topNameLabel;
    UILabel *_bottomNameLabel;
    UILabel *_searchTextLabel;
    int _type;
    SLTwitterUserRecord *_userRecord;
    SLTwitterSession *_session;
}

@property(retain) SLTwitterUserRecord * userRecord;
@property int type;
@property(retain) SLTwitterSession * session;


- (int)type;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setType:(int)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)refreshFields;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })searchTextLabelFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bottomNameLableFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })topNameLableFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })iconViewRect;
- (void)updateLabelColors:(BOOL)arg1;
- (void)updateCellSubviews;
- (id)userRecord;
- (void)setUserRecord:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;

@end
