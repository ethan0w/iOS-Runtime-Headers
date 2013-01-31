/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKThemeBrush;

@interface GKBadgedGameIconBrush : GKThemeBrush  {
    GKThemeBrush *_badgeBrush;
}

@property(retain) GKThemeBrush * badgeBrush;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)badgeBrush;
- (void)setBadgeBrush:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (float)scaleForInput:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;

@end
