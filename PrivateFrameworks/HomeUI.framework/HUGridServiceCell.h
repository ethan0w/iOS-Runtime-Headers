/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGridServiceCell : HUGridCell <HUAccessoryViewCellProtocol> {
    UIView * _accessoryView;
    UIActivityIndicatorView * _activityIndicator;
    UILabel * _coloredDescriptionLabel;
    HUVisualEffectContainerView * _exclamationView;
    BOOL  _hasUpdatedUISinceLastReuse;
    HUIconView * _iconView;
    UIView * _overrideAccessoryView;
    HFItem * _serviceItem;
    HUGridServiceCellTextView * _serviceTextView;
    BOOL  _shouldColorDescription;
    BOOL  _shouldShowLoadingState;
    <NACancelable> * _showProgressIndicatorAfterDelayToken;
    <NACancelable> * _showUpdatingStateAfterDelayToken;
    BOOL  _showingProgressIndicator;
    BOOL  _showingUpdatingState;
}

@property (nonatomic, retain) UIView *accessoryView;
@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, retain) UILabel *coloredDescriptionLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableContinuousIconAnimation;
@property (nonatomic, retain) HUVisualEffectContainerView *exclamationView;
@property (nonatomic) BOOL hasUpdatedUISinceLastReuse;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) HUGridServiceCellLayoutOptions *layoutOptions;
@property (nonatomic, retain) UIView *overrideAccessoryView;
@property (nonatomic, retain) HFItem *serviceItem;
@property (nonatomic, retain) HUGridServiceCellTextView *serviceTextView;
@property (nonatomic) BOOL shouldColorDescription;
@property (nonatomic) BOOL shouldShowLoadingState;
@property (nonatomic) BOOL showProgressIndicatorAfterDelay;
@property (nonatomic, retain) <NACancelable> *showProgressIndicatorAfterDelayToken;
@property (nonatomic) BOOL showUpdatingStateAfterDelay;
@property (nonatomic, retain) <NACancelable> *showUpdatingStateAfterDelayToken;
@property (nonatomic) BOOL showingProgressIndicator;
@property (nonatomic) BOOL showingUpdatingState;
@property (readonly) Class superclass;

+ (id)_iconTintColor;
+ (Class)layoutOptionsClass;

- (void).cxx_destruct;
- (void)_createExclamationViewIfNecessary;
- (void)_getDescription:(id*)arg1 nameTextColor:(id*)arg2 descriptionTextColor:(id*)arg3 forPrimaryState:(int)arg4;
- (void)_setServiceItem:(id)arg1 updateUI:(BOOL)arg2;
- (void)_setupServiceCell;
- (void)_updateAccessoryViewWithPrimaryState:(int)arg1;
- (void)_updateIconWithPrimaryState:(int)arg1 animated:(BOOL)arg2;
- (void)_updateSecondaryContentDisplayStyle;
- (void)_updateTextWithPrimaryState:(int)arg1;
- (void)_updateUIWithAnimation:(BOOL)arg1 overridePrimaryState:(int)arg2;
- (id)accessoryView;
- (id)activityIndicator;
- (id)coloredDescriptionLabel;
- (BOOL)disableContinuousIconAnimation;
- (void)displayStyleDidChange;
- (id)exclamationView;
- (BOOL)hasUpdatedUISinceLastReuse;
- (id)iconView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (void)layoutSubviews;
- (id)overrideAccessoryView;
- (void)prepareForReuse;
- (id)serviceItem;
- (id)serviceTextView;
- (void)setAccessoryView:(id)arg1;
- (void)setActivityIndicator:(id)arg1;
- (void)setColoredDescriptionLabel:(id)arg1;
- (void)setDisableContinuousIconAnimation:(BOOL)arg1;
- (void)setExclamationView:(id)arg1;
- (void)setHasUpdatedUISinceLastReuse:(BOOL)arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setOverrideAccessoryView:(id)arg1;
- (void)setServiceItem:(id)arg1;
- (void)setServiceTextView:(id)arg1;
- (void)setShouldColorDescription:(BOOL)arg1;
- (void)setShouldShowLoadingState:(BOOL)arg1;
- (void)setShowProgressIndicatorAfterDelay:(BOOL)arg1;
- (void)setShowProgressIndicatorAfterDelayToken:(id)arg1;
- (void)setShowUpdatingStateAfterDelay:(BOOL)arg1;
- (void)setShowUpdatingStateAfterDelayToken:(id)arg1;
- (void)setShowingProgressIndicator:(BOOL)arg1;
- (void)setShowingUpdatingState:(BOOL)arg1;
- (BOOL)shouldColorDescription;
- (BOOL)shouldShowLoadingState;
- (BOOL)showProgressIndicatorAfterDelay;
- (id)showProgressIndicatorAfterDelayToken;
- (BOOL)showUpdatingStateAfterDelay;
- (id)showUpdatingStateAfterDelayToken;
- (BOOL)showingProgressIndicator;
- (BOOL)showingUpdatingState;
- (void)updateUIWithAnimation:(BOOL)arg1;

@end
