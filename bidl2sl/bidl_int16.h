/***********************************************************************
  * Copyright (c) 2012, Baidu Inc. All rights reserved.
  * 
  * Licensed under the BSD License
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  * 
  *      license.txt
  *********************************************************************/

/**
 * @file     bidl_int16.h
 * @brief    
 * @author
 * @version  
 * @date     2012年08月09日 14时30分05秒
 *  
 **/
#ifndef _BIDL2SL_INT16_H_
#define _BIDL2SL_INT16_H_

#include "bidl_type.h"

class BidlInt16 : public BidlType {
public:
    BidlInt16() : BidlType() {
        _type_id = INT16;
    }

    virtual ~BidlInt16() {
    }

    virtual std::string get_tag() const {
        return "int16";
    }

    virtual std::string get_tag(const SourceWriter* sw) const {
        return sw->get_int16_tag();
    }

    virtual std::string get_bgcc_type_name(const std::string& lang = "cpp") const {
        if ("cpp" == lang) {
            return "bgcc::IDINT16";
        }
        else {
            return "DataType.IDINT16";
        }
    }

    /**
     * @brief get_return_type_name 
     * 返回在生成Java代码时，本类型作为返回值类型的字符串表示
     *
     * @return 类型字符串
     * @see
     * @note
     * @author
     * @date    2012年09月08日 14时32分23秒
     */
    virtual std::string get_return_type_name() const {
        return "short";
    }

    /**
     * @brief get_parameter_type_name 
     * 返回在生成Java代码时，本类型作为参数类型的字符串表示
     *
     * @return 类型字符串
     * @see
     * @note
     * @author
     * @date    2012年09月08日 14时37分33秒
     */
    virtual std::string get_parameter_type_name() const {
        return "short";
    }

    /**
     * @brief get_general_type_name 
     * 返回在生成Java代码时，本类型作为泛型类型的字符串表示
     *
     * @return 类型字符串
     * @see
     * @note
     * @author
     * @date    2012年09月08日 14时38分19秒
     */
    virtual std::string get_general_type_name() const {
        return "Short";
    }

    /**
     * @brief get_holder_type_name 
     * 返回在生成Java代码时，本类型作为传出类型的字符串表示
     *
     * @return 类型字符串
     * @see
     * @note
     * @author
     * @date    2012年09月08日 14时45分41秒
     */
    virtual std::string get_holder_type_name() const {
        return "ShortHolder";
    }

    /**
     * @brief get_init_clause 
     * 返回在生成Java代码时，本类型的初始化语句
     *
     * @return 类型初始化语句
     * @see
     * @note
     * @author
     * @date    2012年09月08日 14时41分00秒
     */
    virtual std::string get_init_clause() const {
        return "0";
    }
};
#endif // _BIDL2SL_INT16_H_

