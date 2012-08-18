/*******************************************************************************
 *
 * Copyright (C) 2012 Jorge Aparicio <jorge.aparicio.r@gmail.com>
 *
 * This file is part of libstm32pp.
 *
 * libstm32pp is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * libstm32pp is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with libstm32pp. If not, see <http://www.gnu.org/licenses/>.
 *
 ******************************************************************************/

#pragma once

#include "bitband.hpp"
#include "../include/peripheral/rcc.hpp"

namespace tim {
  /**
   * @brief Enables the timer's clock.
   */
  template<address::E T>
  void Functions<T>::enableClock()
  {
    RCC::enableClocks
    <
        (T == address::
            TIM2 ?
            rcc::
            apb1enr::
            TIM2 :
            (T == address::
                TIM3 ?
                rcc::
                apb1enr::
                TIM3 :
                (T == address::
                    TIM4 ?
                    rcc::
                    apb1enr::
                    TIM4 :
                    (T == address::
                        TIM5 ?
                        rcc::
                        apb1enr::
                        TIM5 :
                        (T == address::
                            TIM6 ?
                            rcc::
                            apb1enr::
                            TIM6 :
                            (T == address::
                                TIM7 ?
                                rcc::
                                apb1enr::
                                TIM7 :
                                (T == address::
                                    TIM12 ?
                                            rcc::
                                            apb1enr::
                                            TIM12 :
                                            (T == address::
                                                TIM13 ?
                                                        rcc::
                                                        apb1enr::
                                                        TIM13 :
                                                        (T == address::
                                                            TIM14 ?
                                                                    rcc::
                                                                    apb1enr::
                                                                    TIM14 :
                                                                    rcc::
                                                                    apb1enr::
                                                                    Bits(0))))))))))
    >();

    RCC::enableClocks<
        T == address::
            TIM1 ?
            rcc::
            apb2enr::
            TIM1 :
            (T == address::
                TIM8 ?
                rcc::
                apb2enr::
                TIM8 :
                (T == address::
                    TIM9 ?
                           rcc::
                           apb2enr::
                           TIM9 :
                           (T == address::
                               TIM10 ?
                                       rcc::
                                       apb2enr::
                                       TIM10 :
                                       (T == address::
                                           TIM11 ?
                                                   rcc::
                                                   apb2enr::
                                                   TIM11 :
#ifdef VALUE_LINE
                                                   (T == address::
                                                       TIM15 ?
                                                       rcc::
                                                       apb2enr::
                                                       TIM15 :
                                                       (T == address::
                                                           TIM16 ?
                                                           rcc::
                                                           apb2enr::
                                                           TIM16 :
                                                           (T == address::
                                                               TIM17 ?
                                                               rcc::
                                                               apb2enr::
                                                               TIM17 :
                                                               rcc::
                                                               apb2enr::
                                                               Bits(0))))))))
#else // VALUE_LINE
                                                   rcc::
                                                   apb2enr::
                                                   Bits(0)))))

#endif // VALUE_LINE
>();
  }

  /**
   * @brief Disables the timer's clock.
   */
  template<address::E T>
  void Functions<T>::disableClock()
  {
    RCC::disableClocks
    <
        (T == address::
            TIM2 ?
            rcc::
            apb1enr::
            TIM2 :
            (T == address::
                TIM3 ?
                rcc::
                apb1enr::
                TIM3 :
                (T == address::
                    TIM4 ?
                    rcc::
                    apb1enr::
                    TIM4 :
                    (T == address::
                        TIM5 ?
                        rcc::
                        apb1enr::
                        TIM5 :
                        (T == address::
                            TIM6 ?
                            rcc::
                            apb1enr::
                            TIM6 :
                            (T == address::
                                TIM7 ?
                                rcc::
                                apb1enr::
                                TIM7 :
                                (T == address::
                                    TIM12 ?
                                            rcc::
                                            apb1enr::
                                            TIM12 :
                                            (T == address::
                                                TIM13 ?
                                                        rcc::
                                                        apb1enr::
                                                        TIM13 :
                                                        (T == address::
                                                            TIM14 ?
                                                                    rcc::
                                                                    apb1enr::
                                                                    TIM14 :
                                                                    rcc::
                                                                    apb1enr::
                                                                    Bits(0))))))))))
    >();

    RCC::disableClocks<
        T == address::
            TIM1 ?
            rcc::
            apb2enr::
            TIM1 :
            (T == address::
                TIM8 ?
                rcc::
                apb2enr::
                TIM8 :
                (T == address::
                    TIM9 ?
                           rcc::
                           apb2enr::
                           TIM9 :
                           (T == address::
                               TIM10 ?
                                       rcc::
                                       apb2enr::
                                       TIM10 :
                                       (T == address::
                                           TIM11 ?
                                                   rcc::
                                                   apb2enr::
                                                   TIM11 :
#ifdef VALUE_LINE
                                                   (T == address::
                                                       TIM15 ?
                                                       rcc::
                                                       apb2enr::
                                                       TIM15 :
                                                       (T == address::
                                                           TIM16 ?
                                                           rcc::
                                                           apb2enr::
                                                           TIM16 :
                                                           (T == address::
                                                               TIM17 ?
                                                               rcc::
                                                               apb2enr::
                                                               TIM17 :
                                                               rcc::
                                                               apb2enr::
                                                               Bits(0))))))))
#else // VALUE_LINE
                                                   rcc::
                                                   apb2enr::
                                                   Bits(0)))))

#endif // VALUE_LINE
>();
  }

  /**
   * @brief Starts the counter.
   */
  template<address::E T>
  void Functions<T>::startCounter()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::cr1::OFFSET,
        registers::cr1::bits::cen::POSITION
    >()) = 1;
  }

  /**
   * @brief Stops the counter.
   */
  template<address::E T>
  void Functions<T>::stopCounter()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::cr1::OFFSET,
        registers::cr1::bits::cen::POSITION
    >()) = 0;
  }

  /**
   * @brief Configures the prescaler, so the counter counts in microseconds.
   */
  template<address::E T>
  void Functions<T>::setMicroSecondResolution()
  {
    enum {
      PSC = (FREQUENCY / 1000000) - 1
    };

    static_assert(PSC < 65536,
        "Can't configure the timer to count in microseconds.");

    setPrescaler(PSC);
  }

  /**
   * @brief Configures the prescaler, so the counter counts in miliseconds.
   */
  template<address::E T>
  void Functions<T>::setMiliSecondResolution()
  {
    enum {
      PSC = (FREQUENCY / 1000) - 1
    };

    static_assert(PSC < 65536,
        "Can't configure the timer to count in miliseconds.");

    setPrescaler(PSC);
  }

  /**
   * @brief Waits for <N> counts.
   * @note  Timer must be configured to generate an update request only on
   *        overflow or underflow.
   * @note  If N = 0, the processor will be trapped in an infinite loop.
   */
  template<address::E T>
  void Functions<T>::delay(u16 const N)
  {
    setAutoReload(N);
    generateUpdate();
    clearUpdateFlag();
    startCounter();
    while (!hasUpdateEventOccurred()) {
    }
    stopCounter();
  }

  /**
   * @brief Sets the prescaler value of the counter.
   * @note  A value of 0 indicates no prescaler, a value of 1 indicates
   *        prescaling by 2, and so on.
   */
  template<address::E T>
  void Functions<T>::setPrescaler(u16 const psc)
  {
    reinterpret_cast<Registers*>(T)->PSC = psc;
  }

  /**
   * @brief Sets the auto-reload value of the counter.
   * @note  A value of 0 blocks the counter.
   */
  template<address::E T>
  void Functions<T>::setAutoReload(u16 const rld)
  {
    reinterpret_cast<Registers*>(T)->ARR = rld;
  }

  /**
   * @brief Sets the value of the counter.
   */
  template<address::E T>
  void Functions<T>::setCounter(u16 const cnt)
  {
    reinterpret_cast<Registers*>(T)->CNT = cnt;
  }

  /**
   * @brief Returns the current value of the counter.
   */
  template<address::E T>
  u16 Functions<T>::getCounter()
  {
    return reinterpret_cast<Registers*>(T)->CNT;
  }

  /**
   * @brief Generates an update event.
   */
  template<address::E T>
  void Functions<T>::generateUpdate()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::egr::OFFSET,
        registers::egr::bits::ug::POSITION
    >()) = 1;
  }

  /**
   * @brief Enables the update interrupt.
   */
  template<address::E T>
  void Functions<T>::enableUpdateInterrupt()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::dier::OFFSET,
        registers::dier::bits::uie::POSITION
    >()) = 1;
  }

  /**
   * @brief Disables the update interrupt.
   */
  template<address::E T>
  void Functions<T>::disableUpdateInterrupt()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::dier::OFFSET,
        registers::dier::bits::uie::POSITION
    >()) = 0;
  }

  /**
   * @brief Clears the update interrupt flag.
   */
  template<address::E T>
  void Functions<T>::clearUpdateFlag()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::sr::OFFSET,
        registers::sr::bits::uif::POSITION
    >()) = 0;
  }

  /**
   * @brief Enables the update DMA request.
   */
  template<address::E T>
  void Functions<T>::enableUpdateDma()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::dier::OFFSET,
        registers::dier::bits::ude::POSITION
    >()) = 1;
  }

  /**
   * @brief Disables the update DMA request.
   */
  template<address::E T>
  void Functions<T>::disableUpdateDma()
  {
    *(volatile u32*) (bitband::peripheral<
        T + registers::dier::OFFSET,
        registers::dier::bits::ude::POSITION
    >()) = 0;
  }

  /**
   * @brief Returns true if an update event has occurred.
   */
  template<address::E T>
  bool Functions<T>::hasUpdateEventOccurred()
  {
    return *(volatile bool*) (bitband::peripheral<
        T + registers::sr::OFFSET,
        registers::sr::bits::uif::POSITION
    >());
  }

  /**
   * @brief Configures the timer to generate a periodic interrupt.
   * @note  This functions doesn't starts the counter.
   */
  template<address::E T>
  template<u32 Frequency>
  void Functions<T>::configurePeriodicInterrupt()
  {
    configureBasicCounter<
        registers::cr1::bits::cen::states::COUNTER_DISABLED,
        registers::cr1::bits::udis::states::UPDATE_EVENT_ENABLED,
        registers::cr1::bits::urs::states::UPDATE_REQUEST_SOURCE_OVERFLOW_UNDERFLOW,
        registers::cr1::bits::opm::states::DONT_STOP_COUNTER_AT_NEXT_UPDATE_EVENT,
        registers::cr1::bits::arpe::states::AUTO_RELOAD_UNBUFFERED
    >();

    setAutoReload(
        (FREQUENCY / Frequency < 65536 ?
            FREQUENCY / Frequency :
            (FREQUENCY / (10 * Frequency) < 65536 ?
                FREQUENCY / (10 * Frequency) :
                (FREQUENCY / (100 * Frequency) < 65536 ?
                    FREQUENCY / (100 * Frequency) :
                    (FREQUENCY / (1000 * Frequency) < 65536 ?
                        FREQUENCY / (1000 * Frequency) :
                        (FREQUENCY / (10000 * Frequency) < 65536 ?
                            FREQUENCY / (10000 * Frequency) :
                            0))))));

    setPrescaler(
        (FREQUENCY / Frequency < 65536 ?
            1 - 1 :
            (FREQUENCY / (10 * Frequency) < 65536 ?
                10 - 1 :
                (FREQUENCY / (100 * Frequency) < 65536 ?
                    100 - 1 :
                    (FREQUENCY / (1000 * Frequency) < 65536 ?
                        1000 - 1 :
                        (FREQUENCY / (10000 * Frequency) < 65536 ?
                                                                   10000 - 1 :
                                                                   0))))));

    enableUpdateInterrupt();
    generateUpdate();
  }

  /**
   * @brief Configures the master mode.
   */
  template<address::E T>
  template<
      registers::cr2::bits::mms::states::E MMS
  >
  void Functions<T>::setMasterMode()
  {
    reinterpret_cast<Registers*>(T)->CR2 &= registers::cr2::bits::mms::MASK;
    reinterpret_cast<Registers*>(T)->CR2 |= MMS;
  }

  /**
   * @brief Configures the timer as a basic counter.
   */
  template<address::E T>
  template<
      registers::cr1::bits::cen::states::E CEN,
      registers::cr1::bits::udis::states::E UDIS,
      registers::cr1::bits::urs::states::E URS,
      registers::cr1::bits::opm::states::E OPM,
      registers::cr1::bits::arpe::states::E ARPE
  >
  void Functions<T>::configureBasicCounter()
  {
    reinterpret_cast<Registers*>(T)->CR1 = CEN + UDIS + URS + OPM + ARPE;
  }

}  // namespace tim
