/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHKeynoteState : GQHState  {
    int mCurrentSlide;
    struct CGSize { 
        float width; 
        float height; 
    } mSlideSize;
    int mProgressiveIndex;
}


- (int)progressiveIndex;
- (BOOL)shouldStreamContent;
- (int)currentSlide;
- (void)incrementCurrentSlide;
- (void)setProgressiveIndex:(int)arg1;
- (BOOL)shouldMapLinkWithUrl:(struct __CFString { }*)arg1;
- (id).cxx_construct;
- (void)setSlideSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })slideSize;

@end
