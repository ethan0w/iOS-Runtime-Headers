/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QuerySection : NSObject  {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _range;
    unsigned int _sectionIndex;
}

@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property unsigned int sectionIndex;


- (unsigned int)sectionIndex;
- (void)setSectionIndex:(unsigned int)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 sectionIndex:(unsigned int)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;

@end
