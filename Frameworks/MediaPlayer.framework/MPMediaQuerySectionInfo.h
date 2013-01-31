/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    NSArray *_sections;
    NSArray *_sectionIndexTitles;
}

@property(readonly) NSArray * sections;
@property(copy) NSArray * sectionIndexTitles;
@property(readonly) unsigned int count;


- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id)sections;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)sectionIndexTitles;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)indexOfSectionForSectionIndexTitleAtIndex:(unsigned int)arg1;
- (void)setSectionIndexTitles:(id)arg1;

@end
