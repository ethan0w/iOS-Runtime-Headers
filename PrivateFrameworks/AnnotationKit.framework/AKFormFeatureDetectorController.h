/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate> {
    AKController * _controller;
}

@property AKController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_convertFont:(id)arg1 toSize:(float)arg2;
- (id)controller;
- (void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2;
- (struct CGSize { float x1; float x2; })defaultFeatureSizeForPage:(id)arg1;
- (BOOL)detectFormFeatureAtPoint:(struct CGPoint { float x1; float x2; })arg1 inPageController:(id)arg2;
- (BOOL)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2;
- (id)formFeatureAtPoint:(struct CGPoint { float x1; float x2; })arg1 inPageController:(id)arg2;
- (id)initWithController:(id)arg1;
- (float)maximumFeatureWidthForPage:(id)arg1;
- (void)setController:(id)arg1;
- (BOOL)wantsDefaultFeatures;

@end
