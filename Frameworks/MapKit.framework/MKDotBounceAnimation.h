/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class MKUserLocationViewInternal;

@interface MKDotBounceAnimation : CAKeyframeAnimation  {
    MKUserLocationViewInternal *viewImpl;
}

@property(retain) MKUserLocationViewInternal * viewImpl;

+ (id)defaultValueForKey:(id)arg1;

- (void)dealloc;
- (id)init;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)runActionForKey:(id)arg1 object:(id)arg2 arguments:(id)arg3;
- (id)viewImpl;
- (void)setViewImpl:(id)arg1;

@end
