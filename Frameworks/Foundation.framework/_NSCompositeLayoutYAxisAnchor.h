/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor> {
    float  _constant;
    NSLayoutDimension * _dimension;
    float  _dimensionMultiplier;
    NSLayoutYAxisAnchor * _yAxisAnchor;
}

@property (readonly) NSArray *_childAnchors;

- (id)_childAnchors;
- (id)_expressionInContext:(/* Warning: unhandled struct encoding: '{?=i@}' */ struct { int x1; id x2; })arg1;
- (float)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(float)arg3 plus:(float)arg4;
- (id)initWithCoder:(id)arg1;

@end
