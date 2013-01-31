/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface STStgInfo : NSObject  {
    NSString *m_pstrName;
    int m_type;
    unsigned long m_userFlags;
    unsigned long m_size;
    long m_creationTime;
    long m_modificationTime;
    int m_accessMode;
    struct { 
        unsigned int m_data1; 
        unsigned short m_data2; 
        unsigned short m_data3; 
        unsigned char m_data4[8]; 
    } m_clsid;
}


- (void)setName:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })getCLSID;
- (void)setAccessMode:(int)arg1;
- (int)getAccessMode;
- (void)setModificationTime:(long)arg1;
- (long)getModificationTime;
- (void)setCreationTime:(long)arg1;
- (long)getCreationTime;
- (unsigned long)getSize;
- (void)setUserFlags:(unsigned long)arg1;
- (unsigned long)getUserFlags;
- (int)getType;
- (id)getName;
- (id)initWithStgInfo:(struct _StgInfo { int *x1; int x2; unsigned int x3; unsigned long long x4; int x5; int x6; int x7; struct _SSRW_GUID { unsigned int x_8_1_1; unsigned short x_8_1_2; unsigned short x_8_1_3; unsigned char x_8_1_4[8]; } x8; }*)arg1;
- (void)setCLSID:(struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;
- (void)setType:(int)arg1;
- (void)setSize:(unsigned long)arg1;

@end
