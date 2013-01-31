/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction : AVVideoCompositionInstruction  {
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;
}

@property struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;
@property(retain) struct CGColor { }* backgroundColor;
@property(copy) NSArray * layerInstructions;
@property BOOL enablePostProcessing;

+ (id)videoCompositionInstruction;

- (struct CGColor { }*)backgroundColor;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)setLayerInstructions:(id)arg1;
- (void)setEnablePostProcessing:(BOOL)arg1;
- (BOOL)enablePostProcessing;
- (id)layerInstructions;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;

@end
