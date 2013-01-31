/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class UIActivityIndicatorView, UIToolbar, UIImageView, UINavigationBar, MKMapView, UIView, UIImage, <MKUserTrackingView>;

@interface MKUserTrackingBarButtonItem : UIBarButtonItem  {
    <MKUserTrackingView> *_userTrackingView;
    UIActivityIndicatorView *_progressIndicator;
    UIImageView *_imageView;
    int _state;
    UIToolbar *_toolbar;
    UINavigationBar *_navigationBar;
    UIView *_associatedView;
    BOOL _silverStyle;
    UIImage *_trackingEmptyImage;
    UIImage *_trackingNoneImage;
    UIImage *_trackingFollowImage;
    UIImage *_trackingFollowWithHeadingImage;
}

@property(retain) MKMapView * mapView;
@property BOOL _silverStyle;
@property(retain) UIActivityIndicatorView * _progressIndicator;
@property(retain) UIImageView * _imageView;
@property int _state;
@property(retain) UIToolbar * _toolbar;
@property(retain) UINavigationBar * _navigationBar;
@property(retain) UIView * _associatedView;
@property(setter=_setUserTrackingView:,retain) <MKUserTrackingView> * _userTrackingView;
@property(retain) UIImage * _trackingEmptyImage;
@property(retain) UIImage * _trackingNoneImage;
@property(retain) UIImage * _trackingFollowImage;
@property(retain) UIImage * _trackingFollowWithHeadingImage;

+ (Class)_activityIndicatorClass;

- (void)dealloc;
- (id)initWithMapView:(id)arg1;
- (void)setMapView:(id)arg1;
- (id)mapView;
- (void)set_state:(int)arg1;
- (int)_state;
- (int)_activityIndicatorStyle;
- (id)_imageView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)_progressIndicator;
- (id)createViewForToolbar:(id)arg1;
- (BOOL)_isInMiniBar;
- (void)_updateState;
- (id)createViewForNavigationItem:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setState:(int)arg1;
- (id)_navigationBar;
- (void)set_trackingFollowWithHeadingImage:(id)arg1;
- (void)set_trackingFollowImage:(id)arg1;
- (void)set_trackingNoneImage:(id)arg1;
- (void)set_trackingEmptyImage:(id)arg1;
- (void)set_silverStyle:(BOOL)arg1;
- (BOOL)_silverStyle;
- (id)_associatedView;
- (id)_toolbar;
- (void)set_imageView:(id)arg1;
- (void)set_progressIndicator:(id)arg1;
- (id)_userTrackingView;
- (id)createView;
- (id)initWithWorldView:(id)arg1;
- (id)_imageForState:(int)arg1;
- (int)_styleForState:(int)arg1;
- (id)_contentAnimation;
- (id)_shrinkAnimation;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (id)_trackingFollowWithHeadingImage;
- (id)_trackingFollowImage;
- (id)_trackingEmptyImage;
- (id)_expandAnimation;
- (void)set_navigationBar:(id)arg1;
- (void)_repositionViews;
- (void)set_toolbar:(id)arg1;
- (void)set_associatedView:(id)arg1;
- (float)_verticalOffsetForState:(int)arg1;
- (id)initWithWorldView:(id)arg1 forceSilverStyle:(BOOL)arg2;
- (id)_initWithUserTrackingView:(id)arg1 forceSilverStyle:(BOOL)arg2;
- (void)_setUserTrackingView:(id)arg1;
- (id)_trackingNoneImage;
- (void)_goToNextMode:(id)arg1;

@end
