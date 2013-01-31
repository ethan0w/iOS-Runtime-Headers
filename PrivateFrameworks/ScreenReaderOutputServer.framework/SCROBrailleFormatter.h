/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSAttributedString;

@interface SCROBrailleFormatter : NSObject <NSCopying> {
    struct __CFArray { } *_chunkArray;
    struct __CFDictionary { } *_chunkDictionary;
    struct __CFDictionary { } *_tokenDictionary;
    int _firstToken;
    int _lastToken;
    int _contractionMode;
    BOOL _showEightDot;
    int _displayMode;
    id _appToken;
    NSAttributedString *_statusText;
    BOOL _currentUnread;
    BOOL _anyUnread;
    BOOL _showDotsSevenAndEight;
}


- (void)translate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __CFDictionary { }*)chunkDictionary;
- (struct __CFArray { }*)chunkArray;
- (void)addText:(id)arg1 language:(id)arg2 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 token:(int)arg4 focused:(BOOL)arg5;
- (void)setAppToken:(id)arg1;
- (void)setDisplayMode:(int)arg1;
- (void)setAnyUnread:(BOOL)arg1;
- (void)setCurrentUnread:(BOOL)arg1;
- (id)initWithContractionMode:(int)arg1 showEightDot:(BOOL)arg2 showDotsSevenAndEight:(BOOL)arg3;
- (int)lastToken;
- (int)firstToken;
- (id)appToken;
- (BOOL)showEightDot;
- (void)addText:(id)arg1 selection:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 token:(int)arg3 focused:(BOOL)arg4;
- (BOOL)currentUnread;
- (BOOL)anyUnread;
- (id)deepCopyWithZone:(struct _NSZone { }*)arg1;
- (int)displayMode;
- (int)contractionMode;
- (BOOL)showDotsSevenAndEight;
- (void)setStatusText:(id)arg1;
- (id)statusText;

@end
