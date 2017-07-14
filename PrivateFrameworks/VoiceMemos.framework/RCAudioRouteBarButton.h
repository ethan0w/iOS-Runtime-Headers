/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioRouteBarButton : UIButton {
    BOOL  _needsUpdateDisplay;
    UIColor * _routeToHandsetOrHeadphoneColor;
    UIColor * _routeToSpeakerOrWirelessColor;
}

@property (nonatomic, retain) UIColor *routeToHandsetOrHeadphoneColor;
@property (nonatomic, retain) UIColor *routeToSpeakerOrWirelessColor;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)routeToHandsetOrHeadphoneColor;
- (id)routeToSpeakerOrWirelessColor;
- (void)setNeedsUpdateDisplay;
- (void)setRouteToHandsetOrHeadphoneColor:(id)arg1;
- (void)setRouteToSpeakerOrWirelessColor:(id)arg1;
- (void)updateDisplay;

@end
