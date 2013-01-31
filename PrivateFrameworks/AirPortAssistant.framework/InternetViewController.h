/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class UIActivityIndicatorView, UIImageView, UIPageControl, UILabel, UIView, ViewScroller, NSMutableSet, NSMutableArray;

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {
    UIView *containerView;
    UIView *diagramContainerView;
    ViewScroller *diagramView;
    UIPageControl *pageControl;
    UIView *descriptionContainerView;
    UILabel *descriptionLabel;
    UIView *spinnerWithStatusAdjacentView;
    UIActivityIndicatorView *spinnerWithStatusAdjacentSpinner;
    UILabel *spinnerWithStatusAdjacentLabel;
    UIView *audioCableView;
    UIImageView *audioCablingImageFirstFrame;
    UIImageView *audioCablingImageLastFrame;
    UILabel *audioPortLabel;
    UILabel *speakerLabel;
    UILabel *airplayDeviceLabel;
    UIImageView *speakerImageView;
    UIImageView *airplayDeviceImageView;
    UIImageView *audioInsetImageView;
    UIView *wanCableView;
    UIImageView *cablingImageFirstFrame;
    UIImageView *cablingImageLastFrame;
    UILabel *wanPortLabel;
    UILabel *internetLabel;
    UILabel *routerLabel;
    UILabel *deviceLabel;
    UIImageView *routerImageView;
    UIImageView *deviceImageView;
    UIImageView *insetImageView;
    UIView *resetBroadband1View;
    UIImageView *resetBroadband1Image;
    UILabel *cyclePowerLabel;
    UILabel *removeBatteryLabel;
    UIView *resetBroadband2View;
    UIImageView *resetBroadband2Image;
    UIView *swapCableView;
    UIImageView *swapCableViewCablingImageFirstFrame;
    UIImageView *swapCableViewCablingImageLastFrame;
    UIImageView *swapCableViewRouterImage;
    UIImageView *swapCableViewTargetImage;
    UIImageView *swapCableViewSourceImage;
    UIImageView *swapCableViewInsetImage;
    UILabel *swapCableViewInternetLabel;
    UILabel *swapCableViewRouterLabel;
    UILabel *swapCableViewSourceLabel;
    UILabel *swapCableViewTargetLabel;
    unsigned int internetFlow;
    BOOL pageControlIsChangingPage;
    NSMutableSet *recycledPages;
    NSMutableSet *visiblePages;
    NSMutableArray *images;
    struct { 
        unsigned int ethernetPortCount; 
        unsigned int productID; 
        unsigned int productFamily; 
        int deviceKind; 
    } targetDevice;
    struct { 
        unsigned int ethernetPortCount; 
        unsigned int productID; 
        unsigned int productFamily; 
        int deviceKind; 
    } sourceDevice;
}

@property(retain) UIView * containerView;
@property(retain) UIView * diagramContainerView;
@property(retain) ViewScroller * diagramView;
@property(retain) UIPageControl * pageControl;
@property(retain) UIView * descriptionContainerView;
@property(retain) UILabel * descriptionLabel;
@property(retain) UIView * audioCableView;
@property(retain) UIImageView * audioCablingImageFirstFrame;
@property(retain) UIImageView * audioCablingImageLastFrame;
@property(retain) UILabel * audioPortLabel;
@property(retain) UILabel * speakerLabel;
@property(retain) UILabel * airplayDeviceLabel;
@property(retain) UIImageView * speakerImageView;
@property(retain) UIImageView * airplayDeviceImageView;
@property(retain) UIImageView * audioInsetImageView;
@property(retain) UIView * wanCableView;
@property(retain) UIImageView * cablingImageFirstFrame;
@property(retain) UIImageView * cablingImageLastFrame;
@property(retain) UILabel * wanPortLabel;
@property(retain) UILabel * internetLabel;
@property(retain) UILabel * routerLabel;
@property(retain) UILabel * deviceLabel;
@property(retain) UIImageView * routerImageView;
@property(retain) UIImageView * deviceImageView;
@property(retain) UIImageView * insetImageView;
@property(retain) UIView * resetBroadband1View;
@property(retain) UIImageView * resetBroadband1Image;
@property(retain) UIView * resetBroadband2View;
@property(retain) UIImageView * resetBroadband2Image;
@property(retain) UIView * swapCableView;
@property(retain) UIImageView * swapCableViewCablingImageFirstFrame;
@property(retain) UIImageView * swapCableViewCablingImageLastFrame;
@property(retain) UIImageView * swapCableViewRouterImage;
@property(retain) UIImageView * swapCableViewTargetImage;
@property(retain) UIImageView * swapCableViewSourceImage;
@property(retain) UIImageView * swapCableViewInsetImage;
@property(retain) UILabel * swapCableViewInternetLabel;
@property(retain) UILabel * swapCableViewRouterLabel;
@property(retain) UILabel * swapCableViewSourceLabel;
@property(retain) UILabel * swapCableViewTargetLabel;
@property unsigned int internetFlow;


- (void)setSwapCableViewTargetLabel:(id)arg1;
- (id)swapCableViewTargetLabel;
- (void)setSwapCableViewSourceLabel:(id)arg1;
- (id)swapCableViewSourceLabel;
- (void)setSwapCableViewRouterLabel:(id)arg1;
- (id)swapCableViewRouterLabel;
- (void)setSwapCableViewInternetLabel:(id)arg1;
- (id)swapCableViewInternetLabel;
- (void)setSwapCableViewInsetImage:(id)arg1;
- (id)swapCableViewInsetImage;
- (void)setSwapCableViewSourceImage:(id)arg1;
- (id)swapCableViewSourceImage;
- (void)setSwapCableViewTargetImage:(id)arg1;
- (id)swapCableViewTargetImage;
- (void)setSwapCableViewRouterImage:(id)arg1;
- (id)swapCableViewRouterImage;
- (void)setSwapCableViewCablingImageLastFrame:(id)arg1;
- (id)swapCableViewCablingImageLastFrame;
- (void)setSwapCableViewCablingImageFirstFrame:(id)arg1;
- (id)swapCableViewCablingImageFirstFrame;
- (void)setSwapCableView:(id)arg1;
- (id)swapCableView;
- (void)setResetBroadband2Image:(id)arg1;
- (id)resetBroadband2Image;
- (void)setResetBroadband2View:(id)arg1;
- (id)resetBroadband2View;
- (void)setResetBroadband1Image:(id)arg1;
- (id)resetBroadband1Image;
- (void)setResetBroadband1View:(id)arg1;
- (id)resetBroadband1View;
- (void)setInsetImageView:(id)arg1;
- (id)insetImageView;
- (void)setDeviceImageView:(id)arg1;
- (id)deviceImageView;
- (void)setDeviceLabel:(id)arg1;
- (id)deviceLabel;
- (void)setRouterImageView:(id)arg1;
- (id)routerImageView;
- (void)setRouterLabel:(id)arg1;
- (id)routerLabel;
- (void)setInternetLabel:(id)arg1;
- (id)internetLabel;
- (void)setWanPortLabel:(id)arg1;
- (id)wanPortLabel;
- (void)setCablingImageLastFrame:(id)arg1;
- (id)cablingImageLastFrame;
- (void)setCablingImageFirstFrame:(id)arg1;
- (id)cablingImageFirstFrame;
- (void)setWanCableView:(id)arg1;
- (id)wanCableView;
- (void)setAudioInsetImageView:(id)arg1;
- (id)audioInsetImageView;
- (void)setAirplayDeviceImageView:(id)arg1;
- (id)airplayDeviceImageView;
- (void)setSpeakerImageView:(id)arg1;
- (id)speakerImageView;
- (void)setAirplayDeviceLabel:(id)arg1;
- (id)airplayDeviceLabel;
- (void)setSpeakerLabel:(id)arg1;
- (id)speakerLabel;
- (void)setAudioPortLabel:(id)arg1;
- (id)audioPortLabel;
- (void)setAudioCablingImageLastFrame:(id)arg1;
- (id)audioCablingImageLastFrame;
- (void)setAudioCablingImageFirstFrame:(id)arg1;
- (id)audioCablingImageFirstFrame;
- (void)setAudioCableView:(id)arg1;
- (id)audioCableView;
- (void)setDiagramView:(id)arg1;
- (id)diagramView;
- (void)setDiagramContainerView:(id)arg1;
- (id)diagramContainerView;
- (void)setDescriptionLabel:(id)arg1;
- (id)descriptionLabel;
- (void)setDescriptionContainerView:(id)arg1;
- (id)descriptionContainerView;
- (void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4;
- (id)builtInImageNamed:(id)arg1;
- (id)insetImageForDeviceDiagramInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; }*)arg1 audioImage:(BOOL)arg2;
- (id)deviceImageForDeviceDiagramInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; }*)arg1 audioImage:(BOOL)arg2;
- (void)determineInfoForDevice:(id)arg1 deviceDiagramInfo:(struct { unsigned int x1; unsigned int x2; unsigned int x3; int x4; }*)arg2;
- (void)changeDiagram:(id)arg1;
- (void)setInternetFlow:(unsigned int)arg1;
- (void)addAudioPluginUI;
- (void)addSwapCablingUI;
- (void)addInternetNotWorkingUI;
- (void)addInternetWANPluginUI;
- (unsigned int)internetFlow;
- (void)presentAudioPluginUI;
- (void)presentAudioPluginCompleteUI;
- (void)presentSwapCablingUI;
- (void)presentSwapCablingCompleteUI;
- (void)presentInternetWANPluginUI;
- (void)presentInternetDisconnectedUI;
- (void)setContainerView:(id)arg1;
- (void)setPageControl:(id)arg1;
- (id)pageControl;
- (id)containerView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end
