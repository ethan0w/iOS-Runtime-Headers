/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableArray, WebNodeHighlight;

@interface WebNodeHighlightView : WAKView  {
    WebNodeHighlight *_webNodeHighlight;
    NSMutableArray *_layers;
}


- (id)webNodeHighlight;
- (void)_layoutForRectsHighlight:(struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; int x5; struct Vector<WebCore::FloatQuad, 0> { unsigned int x_6_1_1; struct VectorBuffer<WebCore::FloatQuad, 0> { struct FloatQuad {} *x_2_2_1; unsigned int x_2_2_2; } x_6_1_2; } x6; }*)arg1 parent:(id)arg2;
- (void)_layoutForNodeHighlight:(struct Highlight { struct Color { unsigned int x_1_1_1; boolx_1_1_2; } x1; struct Color { unsigned int x_2_1_1; boolx_2_1_2; } x2; struct Color { unsigned int x_3_1_1; boolx_3_1_2; } x3; struct Color { unsigned int x_4_1_1; boolx_4_1_2; } x4; int x5; struct Vector<WebCore::FloatQuad, 0> { unsigned int x_6_1_1; struct VectorBuffer<WebCore::FloatQuad, 0> { struct FloatQuad {} *x_2_2_1; unsigned int x_2_2_2; } x_6_1_2; } x6; }*)arg1 parent:(id)arg2;
- (void)_attach:(id)arg1 numLayers:(unsigned int)arg2;
- (void)detachFromWebNodeHighlight;
- (id)initWithWebNodeHighlight:(id)arg1;
- (void)layoutSublayers:(id)arg1;
- (void)dealloc;
- (BOOL)isFlipped;
- (void)_removeAllLayers;

@end
