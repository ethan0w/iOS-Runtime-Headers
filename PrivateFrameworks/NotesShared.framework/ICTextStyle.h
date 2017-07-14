/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICTextStyle : NSObject {
    NSDictionary * _attributes;
    NSString * _name;
    unsigned int  _ttStyle;
}

@property (retain) NSDictionary *attributes;
@property (nonatomic, readonly) NSString *icaxStyleDescription;
@property (retain) NSString *name;
@property unsigned int ttStyle;

+ (BOOL)autoListInsertionEnabled;
+ (id)defaultTextStyles;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)arg1;
+ (unsigned int)noteDefaultNamedStyle;
+ (void)setAutoListInsertionEnabled:(BOOL)arg1;
+ (void)setNoteDefaultNamedStyle:(unsigned int)arg1;
+ (id)titleForNamedStyle:(unsigned int)arg1;
+ (unsigned int)validatedNamedStyle:(unsigned int)arg1;

- (void).cxx_destruct;
- (id)attributes;
- (id)icaxStyleDescription;
- (id)name;
- (void)setAttributes:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTtStyle:(unsigned int)arg1;
- (unsigned int)ttStyle;

@end
