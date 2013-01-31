/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceFeature : CIFeature  {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } bounds;
    BOOL hasLeftEyePosition;
    struct CGPoint { 
        float x; 
        float y; 
    } leftEyePosition;
    BOOL hasRightEyePosition;
    struct CGPoint { 
        float x; 
        float y; 
    } rightEyePosition;
    BOOL hasMouthPosition;
    struct CGPoint { 
        float x; 
        float y; 
    } mouthPosition;
    BOOL hasTrackingID;
    int trackingID;
    BOOL hasTrackingFrameCount;
    int trackingFrameCount;
}

@property BOOL hasLeftEyePosition;
@property struct CGPoint { float x1; float x2; } leftEyePosition;
@property BOOL hasRightEyePosition;
@property struct CGPoint { float x1; float x2; } rightEyePosition;
@property BOOL hasMouthPosition;
@property struct CGPoint { float x1; float x2; } mouthPosition;
@property BOOL hasTrackingID;
@property int trackingID;
@property BOOL hasTrackingFrameCount;
@property int trackingFrameCount;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } bounds;

+ (id)faceFeaturesWithBoundsArray:(const struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 count:(unsigned int)arg2;
+ (id)faceFeatureWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)type;
- (id).cxx_construct;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (int)trackingFrameCount;
- (BOOL)hasTrackingFrameCount;
- (int)trackingID;
- (BOOL)hasTrackingID;
- (void)setTrackingFrameCount:(int)arg1;
- (void)setHasTrackingFrameCount:(BOOL)arg1;
- (void)setTrackingID:(int)arg1;
- (void)setHasTrackingID:(BOOL)arg1;
- (void)setMouthPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasMouthPosition:(BOOL)arg1;
- (void)setRightEyePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasRightEyePosition:(BOOL)arg1;
- (void)setLeftEyePosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHasLeftEyePosition:(BOOL)arg1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 hasLeftEyePosition:(BOOL)arg2 leftEyePosition:(struct CGPoint { float x1; float x2; })arg3 hasRightEyePosition:(BOOL)arg4 rightEyePosition:(struct CGPoint { float x1; float x2; })arg5 hasMouthPosition:(BOOL)arg6 mouthPosition:(struct CGPoint { float x1; float x2; })arg7 hasTrackingID:(BOOL)arg8 trackingID:(int)arg9 hasTrackingFrameCount:(BOOL)arg10 trackingFrameCount:(int)arg11;
- (struct CGPoint { float x1; float x2; })mouthPosition;
- (BOOL)hasMouthPosition;
- (struct CGPoint { float x1; float x2; })rightEyePosition;
- (BOOL)hasRightEyePosition;
- (struct CGPoint { float x1; float x2; })leftEyePosition;
- (BOOL)hasLeftEyePosition;

@end
